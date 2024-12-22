#include<iostream>
#include<string>
using namespace std;

class Node{
public:
     int data;
     Node*next;

     Node(int val){
        data = val;
        next = NULL;
     }
};

class List{
public:
    Node*head;
    Node*tail;
    List(){
        head = NULL;
        tail = NULL;
    } 

    void push_front(int val){
        Node* newnode = new Node(val);
        if (head == NULL)
        {
            head = tail = newnode;
        } else{
            newnode->next= head;
            head = newnode;
        }
    }

    void push_back(int val){
        Node* newnode = new Node(val);
        if (head == NULL)
        {
            head = tail = newnode;
        } else {
            tail->next = newnode;
            tail = newnode;
        }
        
    }

void printll(){
    Node*temp = head;
    while (temp!=NULL)
    {
      cout<<temp->data<<"-> ";
      temp = temp->next;
    }
    cout<<"Null"<<"\n";
    
}
Node* splitathead(Node* head){
    Node* slow = head;
    Node* fast = head;
    Node* prev = NULL;
    
    while (fast != NULL && fast->next != NULL)
    {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }

    if(prev != NULL){
        prev->next = NULL; //split at mid
    }

      return slow;  
}

Node* merge(Node* left, Node* right){
    List ans;
    Node* i = left;
    Node* j = right;

    while (i != NULL && j != NULL)
    {
        if (i->data <= j->data)
        {
        ans.push_back(i->data);
        i = i->next;
            
        } else {
            ans.push_back(j->data);
            j = j->next;
        }
        
    }

    while (i!=NULL)
    {
        ans.push_back(i->data);
        i = i->next;
    }
    
    while (j!=NULL)
    {
        ans.push_back(j->data);
        j = j->next;
    }

    return ans.head;
    
    
    
}

Node* mergesort(Node*head){
    if (head == NULL || head->next == NULL)
    {
       return head;
    }
    

    Node* righthead = splitathead(head);

    Node* left = mergesort(head);
    Node* right =  mergesort(righthead);

   return merge(left, right); // head of srted listed
}

};

int main(){
    List ll;
    ll.push_front(4);
    ll.push_front(5);
    ll.push_front(9);
    ll.push_front(7);

    ll.push_back(2);
    ll.push_back(9);
    ll.push_back(1);

    ll.printll();
   ll.head = ll.mergesort(ll.head);
   ll.printll();


    return 0;
}