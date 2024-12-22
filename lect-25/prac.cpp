#include<iostream>
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

class List{

      Node* head;
      Node* tail;

public:
      List(){
        head = NULL;
        tail = NULL;
      }
      void push_front(int val) {
        Node* NewNode = new Node(val);
        if( head == NULL ) {
            head = tail = NewNode;
        } else {
            (*NewNode).next = head;
            head = NewNode;
        }
      }
};

int main(){
List ll;
ll.push_front(3);
ll.push_front(2);
ll.push_front(1);

    return 0;
}