#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

const int N = 10;
int n, M;

int pow (int q, int x) {
    int temp = 1;
    for (int i = 0; i < x; i++)
        temp *= q;
    return temp; 
}

class Node {
    public:
    char value;
    Node *ch[N];
    int cnt, depth;
    string city;
    Node(char value, int depth) {
        this->city = "";
        this->value = value;
        for (int i = 0; i < N; i++)
            ch[i] = NULL;
        cnt = 0;
        this->depth = depth;
    }
};

class Trie {
    public:
    Node *root;
    Trie() {
        root = new Node(' ', 0);
    }

    void insert(string s, string city) {
        Node *cur = root;
        for (int i = 0; i < s.size(); i++) {
            if (cur->ch[s[i] - '0'] != NULL) {
                cur = cur->ch[s[i] - '0'];
            }
            else {
                Node *node = new Node(s[i], i+1);
                cur->ch[s[i] - '0'] = node;
                cur = node;
                if (i == s.size()-1) cur->city = city;
            }
        }
    }

    void search(Node *node, string s) {
        if (s != "")
            cout << s << " - " << node->cnt  << " - " << node-> city << '\n';

        for (int i = 0; i < N; i++)
            if (node->ch[i] != NULL) {
                search(node->ch[i], s + node->ch[i]->value);
            }
    }

    int findCode(Node *node) {
        if (node->city == "") {
            for (int i = 0; i < N; i++){
                if (node->ch[i] != NULL) {
                    node->cnt += findCode(node->ch[i]); 
                }
            }    
        } else{
            node->cnt = pow(10, M-node->depth);
            for (int i = 0; i < N; i++){
                if (node->ch[i] != NULL){
                    node->cnt -= findCode(node->ch[i]); 
                }
            }
            cout << node->city << " " << node->cnt << '\n';
            return pow(10, M-node->depth);
        }
        return node->cnt;
    }
};

int main() {
    cin >> n >> M;
    Trie *trie = new Trie();
    string s, city;
    for (int i = 0; i < n; i++) {
        cin >> s >> city;
        trie->insert(s, city);
    }
    trie->findCode(trie->root); 

    return 0;
}