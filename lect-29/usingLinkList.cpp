#include<iostream>
#include<string>
#include<vector>
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

class Queue{

     Node* head;
     Node* tail;
     
public:
       Queue() {

        head = NULL;
        tail = NULL;

       }

       void push(int val) {
        Node* newnode = new Node(val);
        if(head == NULL){
            head = tail = newnode;
        } else{
            tail->next = newnode;
            tail = newnode;
        }
       }

       void pop(){
        if(empty()){
            cout<<"queue is empty ";
        }
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
       }

     int front(){
        return head->data;
       }

       bool empty()
       {
        return head == NULL;
       }

};


int main(){

Queue q;
q.push(3);
q.push(2);
q.push(1);
q.push(0);

while (!q.empty())
{
    cout<<q.front()<<" ";
    q.pop();
}


    return 0;
}