#include <bits/stdc++.h>
typedef long long ll;


using namespace std;


class Node {
    public:
    char data;
    Node *ch[10];
    bool isEnd;
    Node (char data) {
        this->data = data;
        isEnd = false;
        for (int i = 0; i < 10; i++)
            this->ch[i] = NULL;
    }
};

class Trie {
public:
    Node *root;
    Trie() {
        root = new Node(' ');
    }

    bool insert(string word) {
        Node *cur = root;
        for (int i = 0; i < word.size(); i++) {
            if (cur->ch[word[i] - '0'] != NULL) {
                cur = cur->ch[word[i] - '0'];
                if (cur->isEnd || i == word.size() - 1) {
                    return false;
                } 
            }
            else {
                Node *node = new Node(word[i]);
                cur->ch[word[i] - '0'] = node;
                cur = node;
            } 
        }
        cur->isEnd = true;
        return true;
    }
    
    bool search(string word) {
        Node *cur = root;
        for (int i = 0; i < word.length(); i++) {
            if (cur->ch[word[i] - '0'] == NULL)
                return false;
            cur = cur->ch[word[i] - '0'];
        }
        return true;
    }
};

int main() {

    int q, n;
    string s;
    cin >> q;
    for (int i = 0; i < q; i++) {
        cin >> n;
        Trie *trie = new Trie();
        bool wrong = false;
        for (int j = 0; j < n; j++) {
            cin >> s;
            reverse(s.begin(), s.end());
            if (!trie->insert(s)) {
                wrong = true;
                break;
            }
        }
        if (wrong) 
            cout << "NO" << endl;
        else 
            cout << "YES" << endl;
    }
    return 0;
}