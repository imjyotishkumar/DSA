#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
    int data;
    Node* next;

public:
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class List
{

       Node* Head;
       Node* Tail;
public:

       List(){
        Head = NULL;
        Tail = NULL;
       }           

     void push_back( int val ) {
        Node* NewNode = new Node(val);
        if( Head = NULL) {
             Head = Tail = NewNode;
        } else {
            Tail -> next = NewNode;
            Tail = NewNode;
        }
     }  
     

};

int main()
{
    List ll;
    ll.push_back(3);
    ll.push_back(2);
    ll.push_back(1);

    return 0;
}