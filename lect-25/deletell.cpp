#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
    ~Node()
    {
        cout<<"node destrctor for data = "<<data<<"\n";
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
    }
};

class List
{

public:
    Node *head;
    Node *tail;

    List()
    {
        head = NULL;
        tail = NULL;
    }

    ~List()
    {
        cout<<"destructor for List"<<endl;
        if (head != NULL)
        {
            delete head;
            head = NULL;
        }
    }

    void push_front(int val){
        Node* newnode = new Node(val);
        if(head == NULL){
            head = tail = newnode;
        } else{
            newnode->next =head;
            head = newnode;
        }
         
    }
    void insert_ll(int val , int pos){
        Node* newnode = new Node(val);

        Node*temp = head;
        for (int i = 0; i < pos-1; i++)
        {
          temp= temp->next;
        }
        newnode->next= temp->next;
        temp->next = newnode;
        
    }

    void print_ll(){
        Node* temp = head;
        while (temp!=NULL)
        {
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        
    }
};

int main()
{
    List ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.print_ll();
     ll.insert_ll(100,2);
     ll.print_ll();

    return 0;
}