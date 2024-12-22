#include<iostream>
#include<string>
#include<vector>
using namespace std;

template<class T>
class Node{
public:
       T data;
       Node* next;

      Node(T val){
        data = val;
        next = NULL;
      } 

};

template<class T>
class stack{
public:
    Node<T> *head ;
       stack(){
        head = NULL;
       }    

       void push(T val){
        Node<T>*newnode = new Node<T>(val);
        if (head == NULL)
        {
            head = newnode;
        } else{
            newnode->next = head;
            head = newnode;
        }
        
       }

       void pop(){
        Node<T>*temp = head;
         head = head->next;
         temp->next = NULL;
         delete temp;
       }

       T top(){
        return head->data;
       }

       bool isEmpty(){
        return head == NULL;
       }
};

int main(){
stack<int> ll;
ll.push(4);
ll.push(3);
ll.push(2);
ll.push(1);

while (!ll.isEmpty())
{
    cout<<ll.top()<<" ";
    ll.pop();
}


    return 0;
}