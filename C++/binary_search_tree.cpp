#include <iostream>
#include <queue>
struct Node{
    Node* left;
    int data;
    Node* right;
};
Node* CreateNewNode(int data){
    Node* node = new Node();
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}
Node* Insert(Node* root, int data){
    if(root == NULL){
        root = CreateNewNode(data);
    }else{
        if(data>root->data){
            root->right = Insert(root->right, data);
        }else{
            root->left = Insert(root->left, data);
        }
    }
    return root;
}
bool Search(Node* root, int data){
    if(root == NULL){
        return false;
    }else if(root->data == data){
        return true;
    }else if(data>root->data){
        return Search(root->right, data);
    }else{
        return Search(root->left, data);
    }
    return false;
}
int FindMin(Node* root){
    if(root==NULL){
        return -1;
    }
    while(root->left!=NULL){
        root=root->left;
    }
    return root->data;
}
int FindMax(Node* root){
    if(root == NULL){
        return -1;
    }
    while(root->right != NULL){
        root=root->right;
    }
    return root->data;
}
int FindHeight(Node* node) {
    if(node == NULL){
        return -1;
    }
    int left_height = FindHeight(node->left);
    int right_height = FindHeight(node->right);
    return std::max(left_height, right_height) + 1;
}
void BFS(Node* root){
    if (root == NULL){
        return;
    }
    std::queue<Node*> Q;
    Q.push(root);
    while(!Q.empty()){
        Node* current = Q.front();
        std::cout<<current->data<<std::endl;
        if(current->left!=NULL)Q.push(current->left);
        if(current->right!=NULL)Q.push(current->right);
        Q.pop();
    }
}
void PreOrder(Node* root){
    if(root==NULL) return;
    std::cout<<root->data;
    PreOrder(root->left);
    PreOrder(root->right);
}
void PostOrder(Node* root){
    if(root==NULL) return;
    PostOrder(root->left);
    PostOrder(root->right);
    std::cout<<root->data;
}
void InOrder(Node* root){
    if(root==NULL) return;
    InOrder(root->left);
    std::cout<<root->data;
    InOrder(root->right);
}
int main() {
    Node* root = NULL;
    root = Insert(root, 5);
    root = Insert(root, 3);
    root = Insert(root, 4);
    root = Insert(root, 2);
    root = Insert(root, 6);
    std::cout << Search(root,4)<<std::endl;
    std::cout << FindMin(root)<<std::endl;
    std::cout << FindMax(root)<<std::endl;
    std::cout << FindHeight(root)<<std::endl;
    BFS(root);
    PreOrder(root);
    InOrder(root);
    PostOrder(root);
    return 0;
}
