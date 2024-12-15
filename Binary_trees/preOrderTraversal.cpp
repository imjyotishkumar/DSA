#include<iostream>
#include<vector>
using namespace std;

class Node{


    public:
    int data;
    Node * left;
    Node * right;

    Node(int data){
        this->data = data;
        left = right = NULL;
    }

};

static int idx= -1;

Node * Build_trees(vector<int>nodes){
    idx++;

    if(nodes[idx] == -1 ){
        return NULL;
    }

    Node * currNode = new Node(nodes[idx]);
    currNode->left = Build_trees(nodes);
    currNode->right = Build_trees(nodes);

    return currNode;
}

void preOrderTraversal(Node* root){
    if(root == NULL){
        return;
    }

    cout<<root->data;
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);

}

int main(){
vector<int>nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
Node * root = Build_trees(nodes);
preOrderTraversal(root);
    return 0;
}