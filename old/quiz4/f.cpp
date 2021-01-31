#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

class Node {
    public:
    int data;
    Node *left, *right;

    Node(int data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

class BST {
    public:
    Node *root;
    BST() {
        root = NULL;
    }

    Node *insert(Node *node, int data) {
        if (node == NULL) {
            node = new Node(data);
            return node;
        }
        if (data <= node->data)
            node->left = insert(node->left, data);
        else 
            node->right = insert(node->right, data);
        return node;
    }

    void inOrder(Node *node) {
        if (node == NULL)
            return;
        inOrder(node->left);
        cout << node->data << " ";
        inOrder(node->right);
    }

    Node *findElement(Node *node, int data) {
        if (node == NULL || node->data == data)
            return node;
        if (node->data < data)
            return findElement(node->right, data);
        else 
            return findElement(node->left, data);
    }
};

int main() {
    BST *bst = new BST();
    int n, k, x;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> k;
        bst->root = bst->insert(bst->root, k);
    }
    cin >> x;
    //Node *node = bst->findElement(bst->root, x);
    //cout << node->data;
    bst->inOrder(bst->root);
}