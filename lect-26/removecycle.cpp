#include<iostream>
#include<string>
using namespace std;

class Node{
public:
     int data;
     Node* next;

     Node(int val ){
        data = val;
        next = NULL;
     }
}; 
class List{
public:
      Node*head;
      Node* tail;

      List(){
        head = NULL;
        tail = NULL;
      } 

      void push_front(int val ){
        Node* newnode = new Node(val);
        if (head==NULL)
        {
            head = tail = newnode;
        } else{
            newnode->next= head;
            head = newnode;
        }
      }

      void printll(){
        Node* temp = head;
        while (temp!=NULL)
        {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL\n";
      } 

      void removecycle(){
        //detect cycle
        Node*slow = head;
        Node*fast = head;
        bool iscycle = false;  
        while (fast!=NULL && fast->next!=NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast )
            {
                iscycle = true;
                cout<<"cycle exist";
                break;
            }
             
        }
        if (!iscycle)
        {
            cout<<"cycle doesn't exist";
            return;
        }

        slow = head;
        if (slow == fast) //specia case
        {
            while (fast->next!=slow)
            {
                   fast= fast->next;
            }
            fast->next = NULL;
            
        } else{
            Node*previous = fast;
            while (slow!=fast)
            {
                slow = slow->next;
                previous=fast;
                fast = fast->next;
            }
            previous->next= NULL; // remove cyce
            
        }
        
        
         
      }
}; 

int main(){
    List ll;
    ll.push_front(4);  
    ll.push_front(3);  
    ll.push_front(2);  
    ll.push_front(1);
    ll.printll();
    ll.tail->next = ll.head;  
    ll.removecycle();
    ll.printll();

    return 0;
}