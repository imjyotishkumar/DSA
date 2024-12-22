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
        } else {
            newnode->next = head;
            head = newnode;
        }
      }

      void printll(){
        Node* temp = head;
        while (temp->next != NULL)
        {
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<"null\n";
      }

      int iterativeSearch(int key){
        Node* temp = head;
        int i = 0;
        while (temp->next->next!=NULL)
        {
            if (temp->data == key)
            {
                return i;
            }
            temp= temp->next;
            i++;
        }

        return -1;
        
      }

};

int main(){
list ll;
ll.push_front(6);
ll.push_front(5);
ll.push_front(4);
ll.push_front(3);
ll.push_front(2);
ll.push_front(1);
ll.printll();
cout<<ll.iterativeSearch(6);
    return 0;
}