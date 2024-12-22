#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Node{
public:
     int data;
     Node* next;

public:
      Node(int val) {
        data = val;
        next = NULL;
      }     

};

class list{

Node* head;
Node* tail;

public:

     list() {
        head = NULL;
        tail = NULL;
     }

     void push_front(int val){
        Node* newNode = new Node(val);
        if(head == NULL) {
            head = tail = newNode;
        } else {
            newNode -> next = head;
            head = newNode;
        }
     }   

};

int main() {

    list ll;
    
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    return 0;
}