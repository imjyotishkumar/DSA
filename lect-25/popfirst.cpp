#include<iostream>
#include<string>
using namespace std;

class node{
public:
       int data;
       node* next;

       node(int val){
            data = val;
            next = NULL;
       }
};

class list{
public:
       node* head;
       node* tail;

       list(){
        head = NULL;
        tail = NULL;
       }

       void pushfront(int val){
        node* newnode = new node(val);
        if (head == NULL)
        {
           head = tail = newnode;
        } else{
            newnode -> next = head;
            head = newnode;
        }
       }
       void insertmiddle(int val , int pos){
        node* newnode = new node(val);
        node* temp = head;
       for (int i = 0; i < pos-1; i++)
       {
            temp = temp->next;
        } 
        newnode->next = temp->next;
        temp->next = newnode;
       }

       void printll(){
        node* temp = head;
        while (temp!=NULL)
        {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NUll\n";
        
       }

       void popfront(){
         if(head == NULL){
            cout<<"empty linked list";
            return;
         }
        node* temp = head;
        head= head->next;

        temp->next= NULL;
        delete temp;
       }
};

int main(){
list ll;
ll.pushfront(4);
ll.pushfront(3);
ll.pushfront(2);
ll.pushfront(1);
ll.printll();
ll.popfront();
ll.printll();

    return 0;
}