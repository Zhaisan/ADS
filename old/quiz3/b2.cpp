#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

class Node {
    public:
    char value;
    Node *ch[26];
    int cnt;
    Node(char value) {
        this->cnt = 0;
        this->value = value;
        for (int i = 0; i < 26; i++)
            this->ch[i] = NULL;
    }
};
bool checkAll = false;
int tempCnt = 0;
class Trie {
    public:
    Node *root;
    Trie() {
        root = new Node(' ');
    }

    void insert(string s) {
        Node *cur = root;
        for (int i = s.size() - 1; i >= 0; i--) {
            if(checkAll && i == 0){
                if (cur->ch[s[i] - 'a'] != NULL)
                    tempCnt = cur->ch[s[i] - 'a']->cnt;
                else 
                    tempCnt = 0;
            }
            if (cur->ch[s[i] - 'a'] != NULL){
                cur = cur->ch[s[i] - 'a'];
                // cout << s[i] << " " << cur -> cnt << endl;
            }
            else {
                Node *node = new Node(s[i]);
                cur->ch[s[i] - 'a'] = node; 
                cur = node;
            }
            if(!checkAll)
                cur->cnt++;
        }
    }
};

int main(){
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n, q;
    Trie *trie = new Trie();
    cin >> n >> q;
    for(int i = 0; i < n;  i++){
        string s;
        cin >> s;
        trie->insert(s);
    }
    checkAll = true;
    for(int i = 0; i < q; i++){
        string s;
        cin >> s;
        trie->insert(s);
        cout << tempCnt << endl;
        tempCnt = 0;
    }
    return 0;
}
