// Online C++ compiler to run C++ program online
#include <iostream>
struct Node {
        int data;
        Node* next;
    };
Node* head = NULL;
  void Insert(int data, int pos){
        Node* temp = new Node();
        temp->data = data;
        temp->next = NULL;
        if(pos==1){
            temp->next = head;
            head = temp;
        }else{
            Node* newTemp = head;
            for(int i=0; i<pos-2; i++){
                newTemp=newTemp->next;
            }
            temp->next = newTemp->next;
            newTemp->next = temp;
        }
        
    }
    void Reverse(){
        Node* temp = head;
        Node* prevNode = head;
        Node* nextNode;
        while(temp != NULL){
            
            if(temp->next == NULL){
                head->next = NULL;
                head = temp;
                temp->next = prevNode;
                return;
            }
            nextNode = temp->next;
            temp->next = prevNode;
            
            prevNode = temp;
            temp=nextNode;
        }
    }
    void Print(){
        Node* temp=head;
        while(temp != NULL){
            std::cout<<temp->data<<std::endl;
            temp=temp->next;
        }
    }
int main() {
    Insert(0,1);
    Insert(1,2);
    Insert(2,3);
    Insert(3,4);
    Insert(7,2);
    Reverse();
    Print();
    return 0;
}
