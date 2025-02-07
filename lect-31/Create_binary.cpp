#include<iostream>
#include<vector>
using namespace std;

class Node{
  public:
  int data;
  Node * left;
  Node * right;
  Node(int data ){
    this->data = data;
    left = right = NULL;
  }
};
static int idx = -1;
Node* Binary_trees(vector<int>nodes){
       idx++;
       if(nodes[idx]==-1){
        return NULL;
       }

       Node * currNode = new Node( nodes[idx]);
       currNode->left = Binary_trees(nodes);
       currNode->right = Binary_trees(nodes);

       return currNode;

}

int main(){

    vector<int>nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* data = Binary_trees(nodes);
    cout<<data->data;


    return 0;
}