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
};

class List
{

    Node *head;
    Node *tail;

public:
    List()
    {
        head = NULL;
        tail = NULL;
    }

    void pust_front(int val)
    {
        Node *NewNode = new Node(val);
        if (head == NULL)
        {
            head = tail = NewNode;
        }
        else
        {
            NewNode->next = head;
            head = NewNode;
        }
    }

    void push_back(int val)
    {
        Node *NewNode = new Node(val);
        if (head == NULL)
        {
            head = tail = NewNode;
        }
        else
        {
            tail->next = NewNode;
            tail = NewNode;
        }
    }

    void print_ll()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout<<"NULL\n";
    }
};

int main()
{
    List ll;
    ll.pust_front(3);
    ll.pust_front(2);
    ll.pust_front(1);
    ll.pust_front(0);

    ll.push_back(4);
    ll.push_back(5);
    ll.push_back(6);

    ll.print_ll();
    return 0;
}