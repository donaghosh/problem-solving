// Online C++ compiler to run C++ program online
#include <iostream>
struct Node{
    int data;
    Node* left;
    Node* right;
};

Node* MakeNewNode(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

Node* Insert(Node* head, int data){
    if (head==NULL){
        head = MakeNewNode(data);
    }
    else
    {
        if(data > head->data){
            head->right = Insert(head->right, data);
        }
        else
        {
            head->left = Insert(head->left, data);
        }
    }
    return head;
}

bool Search(Node* root, int data){
    if (root == NULL){
        return false;
    }else if(data == root->data){
        return true;
    }else if(data > root->data){
        return Search(root->right, data);
    }else{
        return Search(root->left, data);
    }
}

int main() {
    Node* root = NULL;
    root = Insert(root, 4);
    root = Insert(root, 3);
    root = Insert(root, 5);
    bool IsPresent = Search(root, 8);
    std::cout<<IsPresent;
    return 0;
}
