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
      Node* head;
      Node* tail;
public:
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

      void insertmiddle(int val, int pos){
        Node* newnode = new Node(val);
        Node* temp = head;
        for (int i = 0; i < pos-1; i++)
        {
           temp= temp->next;
        }
        newnode->next=temp->next;
        temp->next = newnode;
      }
       
      int helper(Node* temp, int key){
         if(temp == NULL){
            return -1;
         }

         if(temp->data == key){
            return 0;
         }

         int idx = helper(temp->next, key);
         if(idx == -1){
            return -1;
         }
         return idx + 1;
      }   

      int recursiveSearch(int key){
        return helper(head, key);
      }

};

int main(){

list ll;
ll.push_front(3);
ll.push_front(2);
ll.push_front(1);
ll.push_front(4);
ll.push_front(5);
ll.push_front(16);
cout<<ll.recursiveSearch(2);

    return 0;
}