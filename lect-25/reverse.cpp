#include<iostream>
#include<string>
using namespace std;

class Node{
public:
         int data;
         Node* next;

         Node(int val) {
            data = val;
            next = NULL;
         }
};

class List{
public:

       Node* head;
       Node* tail;

       List(){
        head = NULL;
        tail = NULL;
       }

       void push_front(int val ) {
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        } else{
            newNode->next = head;
            head = newNode;
        }
       }

       void push_back(int val) {
        Node* newNode = new Node(val);
        if( head == NULL ){
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
       }
       
       void insetMiddle(int val, int pos){
        Node* newNode = new Node(val); //dynamic

        Node*temp = head;
        for (int i = 0; i < pos-1; i++)
        {
            temp = temp->next;
        }

        newNode->next = temp->next;
        temp->next = newNode;
        
       }

       void print_ll(){
        Node*temp = head;
        while (temp!= NULL)
        {
            cout<< temp->data<<"->";
            temp = temp->next;
        }
        cout<<"NULL\n";
        
       }

       void reverse() {
        Node* curr = head;
        Node* prev = NULL;

        while (curr!=NULL)
        {
            Node* next= curr->next;
            curr->next = prev;

            // updation
            prev = curr;
            curr = next;
        }
        head = prev;
        
       }

};

int main(){
    List ll;
    
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
     
    ll.print_ll();

    ll.push_back(5);
    ll.push_back(6);
    ll.push_back(7);

    ll.print_ll();

    ll.insetMiddle(100,3);
    ll.print_ll();
    ll.reverse();
    ll.print_ll(




        
    );
    return 0;
}