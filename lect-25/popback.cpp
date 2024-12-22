#include<iostream>
using namespace std;

class Node{

public:
       int data;
       Node* next;

       Node(int val){
        data = val;
        next = NULL;
       }
};

class list{

public:
      
      Node* head;
      Node* tail;

      list(){
        head = NULL;
        tail = NULL;
      }

      void push_front(int val){
        Node* newnode = new Node(val);
        if(head == NULL){
            head = tail = newnode;
        } else{
            newnode->next = head;
            head = newnode;
        }
      }
      void pop_back(){
        Node*temp = head;
        while (temp->next->next!=NULL)
        {
        temp = temp->next;
        }
        temp->next=NULL;
        delete tail;
        tail = temp;
        


      }

      void printll(){
        Node* temp = head;
        while (temp != NULL)
        {
            cout<< temp->data<<"->";
            temp = temp->next;
        }
        cout<<"null\n";
        
      }

};

int main(){
list ll;
ll.push_front(4);
ll.push_front(3);
ll.push_front(2);
ll.push_front(1);
ll.printll();
ll.pop_back();
ll.printll();

    return 0;
}