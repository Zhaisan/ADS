#include <bits/stdc++.h>

using namespace std;
int cnt = 0;
class Node{
    public:
    int data;
    Node *left, *right;

    Node(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

class BST{
    public:
    Node *root;
    long long height;

    

    Node *insert(Node *node, int data){
        if(node == NULL){
            node = new Node(data);
            return node;
        }
        
        if(data > node->data){
            node->right = insert(node->right, data);
        }
        else if(data < node->data){
            node->left = insert(node->left, data);
        }
        
        return node;
    }
    // void count(Node *node){
    //     if(node == NULL)
    //         return;
    //     if(node->left != NULL and node->right != NULL){
    //         cnt++;
    //     }
    // }
    void inOrder(Node *node){
        if (node == NULL)
            return;
        inOrder(node->left);
        if (node->right != NULL and node->left != NULL){
            cnt++;
        }
        inOrder(node->right);
    }



    

    Node *findMin(Node *node){
        while(node->left != NULL)
            node = node->left;
        return node;
    }

    Node *findMax(Node *node){
        while(node->right != NULL)
            node = node->right;
        return node;
    }

    Node *deleteNode(Node *node, int data){
        if(node == NULL)
            return NULL;
        if(data < node->data)
            node->left = deleteNode(node->left, data);
        else if(data > node->data)
            node->right = deleteNode(node->right, data);
        else{
            if(node->right == NULL and node->left == NULL)
                node = NULL;
            else if(node->left == NULL)
                node = node->right;
            else if(node->right == NULL)
                node = node->left;
            else{
                Node *tmp = findMin(node->right);
                node->data = tmp->data;
                node->right = deleteNode(node->right, tmp->data);
            }
        } 
        return node;
    }
};

int main(){
    BST *bst = new BST();
    long long q,x;
    cin >> q;
    while(q--){
        cin >> x;
        bst->root = bst->insert(bst->root, x);
    }
    bst->inOrder(bst->root);
    cout << cnt;
    return 0;
}