//Uragirimono no Requiem
#include <iostream>
#include <string>
using namespace std;

class Node {
    public:
    char data;
    Node *ch[26];
    Node(char data) {
        this->data = data;
        for (int i = 0; i < 26; i++)
            this->ch[i] = NULL;
    }
};
bool checkAll = false;
class Trie {
    public:
    Node *root;
    Trie() {
        root = new Node(' ');
    }

    void insert(string s) {
        Node *cur = root;
        for (int i = 0; i < s.size(); i++) {
            if (cur->ch[s[i] - 'a'] != NULL) 
                cur = cur->ch[s[i] - 'a'];
            else {
                Node *node = new Node(s[i]);
                cur->ch[s[i] - 'a'] = node;
                cur = node;
            }
        }    
    }
    bool search(string s) {
        Node *cur = root;
        for (int i = 0; i < s.size(); i++) {
            if (cur->ch[s[i] - 'a'] != NULL) 
                cur = cur->ch[s[i] - 'a'];
            else {
                return false;
            }
        }
        for(int i = 0; i < 26; i++){
            if(cur -> ch[i] != NULL)
                return false;
        }
        return true;    
    }
};
int main() {
    Trie *trie = new Trie();
    string s;
    cin >> s;
    int n;
    cin >> n; 
    for(int i = 0; i < n; i++){
        string t;
        cin >> t;
        trie->insert(t);
    }
    for(int i = 1; i < s.size(); i++){
        string s1 = s.substr(0, i);
        string s2 = s.substr(i);
        if(trie->search(s1) && trie ->search(s2)){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}