#include <bits/stdc++.h>

using namespace std;

bool check = true;

class Node{
    public:
    long long data;
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
    

    BST(){
        root = NULL;
       
    }

    Node *insert(Node *node, int data){
        if(node == NULL){
            node = new Node(data);
            return node;
        }
        if(data < node->data){
            node->left = insert(node->left, data);
        }else if(data > node->data){
            node->right = insert(node->right, data);
        }
        return node;
        
    }
    
    void inOrder(Node *node){
        if(node == NULL)
            return;
        inOrder(node->left);
        if(node->left != NULL and node->right == NULL){
            cout << node->data << '\n';
        }else if(node->left == NULL and node->right != NULL){
            cout << node->data << '\n';
        }
        inOrder(node->right);
    }

    


    // void twoChild(Node *node){
    //     if(node == NULL){
    //         return;
    //     }
    //     if(node->left != NULL and node->right != NULL){
    //         cout << node->data << '\n';
    //     }
    //     twoChild(node->left);
    //     twoChild(node->right);
    // }

    

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
            if(node->right == NULL && node->left == NULL)
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
int balanced(Node *node){
    if(node == NULL) 
        return 0;
    int heightLeft = 1 + balanced(node->left);
    int heightRight = 1 + balanced(node->right);
    if(abs(heightLeft - heightRight) > 1){
        check = false;
    }
    return max(heightLeft, heightRight);
    }

int main(){
    BST *bst = new BST();
    while(true){
        long long x;
        cin >> x;
        if(x == 0)
            break;
        bst->root = bst->insert(bst->root, x);
    }
    int b;
    b = balanced(bst->root);
    if(check)
        cout << "YES";
    else 
        cout << "NO";
    return 0;
}