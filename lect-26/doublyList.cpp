#include<iostream>
using namespace std;

class Node{

    public:
            int data;
            Node* next;
            Node* prev;

      Node(int val){
        data = val;
        next=prev=NULL;
      }
};
class doublyList{

    public:
            Node* head;
            Node* tail;

            doublyList(){
                head = tail = NULL;

            }

       void push_front(int val){
        Node* newnode = new Node(val);
        if (head == NULL)
        {
            head = tail = newnode;
        } else{
            newnode->next = head;
            head->prev = newnode;
            head = newnode;
        }
        

       }     

       void printll(){
        Node*temp = head;
        while (temp!=NULL)
        {
              cout<<temp->data<<" ";
              temp = temp->next;
        }
        
        
       }

      void pop_front(){

        Node* temp = head;
        head = head->next;
        if (head != NULL)
        {
            head->prev= NULL;

        }
        temp->next= NULL;
        delete temp;
        

      }
};

int main(){
doublyList ll;
ll.push_front(4);
ll.push_front(3);
ll.push_front(2);
ll.push_front(1);

ll.printll();
cout<<endl;
ll.pop_front();
ll.printll();
    return 0;
}