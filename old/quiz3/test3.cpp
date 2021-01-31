#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Node {
    public:
    char data;
    Node *ch[10];
    bool isList = false;
    Node(char data) {
        this->data = data;
        for (int i = 0; i < 10; i++)
            this->ch[i] = NULL;
    }
};
bool check;
bool tempCheck;
int cnt = 0;
class Trie {
    public:
    Node *root;
    Trie() {
        root = new Node(' ');
    }

    void insert(string s) {
        Node *cur = root;
        for (int i = s.size(); i >= 0; i--) {
            if (cur->ch[s[i] - '0'] != NULL){
                cur = cur->ch[s[i] - '0'];
                if(cur->isList) 
                    check = true;
            }
            else {
                Node *node = new Node(s[i]);
                cur->ch[s[i] - '0'] = node;
                cur = node;
            }
            if(i == 0){
                if(cur->isList)
                    check = true;
                cur->isList = true;
            }
        }    
    }
};
int main() {
    // freopen("input.txt", "r", stdin);
    int t, n;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> n;
        Trie *trie = new Trie();
        vector<string> numbers;
        check = false;
        for(int j = 0; j < n; j++){
            string s;
            cin >> s;
            trie->insert(s);
        }
        if(check){
            cout << "YES" << endl;
        }else 
            cout << "NO" << endl;
    }
    return 0;
}