// Online C++ compiler to run C++ program online
#include <iostream>

struct Node{
    int data;
    Node* left;
    Node* right;
};

Node* MakeNewNode(int data){
    Node* n = new Node();
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}
Node* Insert(Node* node, int data){
    if(node==NULL){
        node= MakeNewNode(data);
        return node;
    }
    if(node->data < data){
        node->right = Insert(node->right, data);
    }else{
       node->left = Insert(node->left, data);
    }
    return node;
}
bool IsLesser(Node* node, int val){
    if(node == NULL){
        return true;
    }
    if(node->data > val ){
        return false;
    }
    return IsLesser(node->left, val) && IsLesser(node->right, val);
}
bool IsGreater(Node* node, int val){
    if(node == NULL){
        return true;
    }
    if(node->data < val ){
        return false;
    }
    return IsGreater(node->left, val) && IsGreater(node->right, val);
}
bool IsBST(Node* node){
    if (node == NULL){
        return true;
    }
    return IsLesser(node->left, node->data) && IsGreater(node->right,node->data) && IsBST(node->left) && IsBST(node->right);
}
int main() {
    // Write C++ code here
    Node* root = NULL;
    root = Insert(root, 5);
    root = Insert(root, 3);
    root = Insert(root, 7);
    root = Insert(root, 2);
    root = Insert(root, 4);
    root = Insert(root, 6);
    root = Insert(root, 8);
    
    std::cout << IsBST(root);

    return 0;
}
