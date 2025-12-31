// Online C++ compiler to run C++ program online
#include <iostream>
struct Node {
        int a;
        Node* link;
    };
int main() {
    // insertion
    Node* head = NULL;
    for(int i=0; i<3; i++){
        Node* temp = new Node();
        temp->a = i;
        temp->link = NULL;
        Node* oldNode;
        if(i==0){
            head = temp;
        }else{
            oldNode->link = temp;
        }
        oldNode = temp;
        // std::cout << temp->a;
    }
    //print
    Node* tempo = head;
      while(tempo!=NULL){
        // std::cout << tempo->a;
        tempo = tempo->link;
    }
    //insert at first node
        Node* temp = new Node();
        temp->a=9;
        temp->link = head;
        // std::cout << temp->a;
    //insert at nth position
        int insertAt=2;
        int i =1;
        Node* prevNode=head;
        temp=head;
        Node* newNode = new Node();
        while(temp->link != NULL){
            if (i==insertAt-1){
                newNode->a = 7;
                prevNode=temp->link;
                temp->link = newNode; 
                newNode->link=prevNode; 
            }
            temp=temp->link;
            i++;
             
        }
            tempo = head;
            while(tempo!=NULL){
            // std::cout << tempo->a << " ";
            tempo = tempo->link;
    }
    //delete a node at nth position
    int n = 2;
    // Node* prevNode;
    if(n==1){
        temp= head->link;
        head->link = temp->link;
        temp->link= NULL;
    }
    if(n>1){
        temp=head;
        for(int i=0; i<n-2;i++){
            if(temp->link == NULL){
                return 0;
            }
            // std::cout << temp->a << " ";
            temp=temp->link;
        }
        // std::cout << temp->a <<std::endl;
        Node* a = temp->link;
        temp->link = temp->link->link;
        a->link=NULL;
        
    }
            tempo = head;
            while(tempo!=NULL){
            std::cout << tempo->a << " ";
            tempo = tempo->link;
            }
    
    return 0;
}
