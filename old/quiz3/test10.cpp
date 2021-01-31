#include <iostream>
#include <string>
using namespace std;

class Node {
    public:
    char value;
    Node *ch[26];
    int cnt;
    Node(char value) {
        cnt = 1;
        this->value = value;
        for (int i = 0; i < 26; i++)
            this->ch[i] = NULL;
    }
};

class Trie {
    public:
    Node *root;
    Trie() {
        root = new Node(' ');
    }

    void insert(string s) {
        Node *cur = root;
        for (int i = 0; i < s.size(); i++) {
            if (cur->ch[s[i] - 'a'] != NULL){
                cur = cur->ch[s[i] - 'a'];
                cur -> cnt++;
            }
            else {
                Node *node = new Node(s[i]);
                cur->ch[s[i] - 'a'] = node; 
                cur = node;
            }
        }
    }
    int find(string s) {
        Node *cur = root;
        for (int i = 0; i < s.size(); i++) {
            if (cur->ch[s[i] - 'a'] != NULL){
                cur = cur->ch[s[i] - 'a'];
                if(i == s.size() - 1)
                    return cur -> cnt;
            }
            else {
                return 0;
            }
        }
    }
};

int main() {
    Trie *trie = new Trie();
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        trie->insert(s);
    }
    for(int i = 0;i < m; i++){
        string s;
        cin >> s;
        cout << trie->find(s) << endl;
    }
    return 0;
}