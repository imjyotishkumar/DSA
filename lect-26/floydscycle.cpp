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
    Node* head;
    Node* tail;

    List(){
        head = NULL;
        tail = NULL;
    } 

    void pushfront(int val ){
        Node* newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
        } else{
            newNode->next = head;
            head = newNode;
        }
        
    }

    void Printl(){
        Node*temp = head;
        while (temp != NULL)
        {
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        
    }

    bool isCycle(){
        Node* fast = head;
        Node* slow = head;
        while (fast!=NULL && fast->next!=NULL)
        {
            slow= slow->next;
            fast= fast->next->next;
            if (slow == fast )
            {
                cout<<"cycle exist ";
                return true;
            }
             
        }

        cout<<"cycle doesn't exist";
        return false;
         
    }  

}; 


int main(){

    List ll;
    ll.pushfront(4);
    ll.pushfront(3);
    ll.pushfront(2);
    ll.pushfront(1);
    ll.Printl();
    ll.tail->next = ll.head;
    ll.isCycle();

    return 0;
}