#include <bits/stdc++.h>


using namespace std;
int cnt = 0;
int max_level;
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

    BST(){
        root = NULL;
        height = 0;
    }

    Node *insert(Node *node, int data){
        if(node == NULL){
            node = new Node(data);
            cnt++;
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
        cout << node->data << " ";
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
// void level(Node *node, int cnt){
//         if(node == NULL)
//             return;
//         max_level = max(max_level, cnt);
//         level(node->left, cnt + 1);
//         level(node->right, cnt + 1);
//     }

int main(){
    BST *bst = new BST();
    while(true){
        long long x;
        cin >> x;
        if(x == 0)
            break;
        bst->root = bst->insert(bst->root, x);
    }
    cout << cnt;
    return 0;
}