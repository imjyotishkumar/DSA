#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data = data;
        left = right = NULL;
    }
};

void getInorder(Node*root, vector<int>&nodes){
    if(root == NULL){
        return;
    }
    getInorder(root->left,nodes);
    nodes.push_back(root->data);
    getInorder(root->right,nodes);
}

Node* convertBSTvec(vector<int>nodes,int st, int end){
    if(st>end){
        return NULL;
    }

    int mid = st + (end - st)/2;
    Node* curr = new Node(nodes[mid]);
    curr->left = convertBSTvec(nodes,st,mid-1);
    curr->right = convertBSTvec(nodes,mid+1,end);
    return curr;

}

void preorder(Node*root){
    if(root == NULL){
        return;
    }

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

int main(){
Node* root = new Node(6);
root->left = new Node(5);
root->left->left = new Node(4);
root->left->left->left = new Node(3);

root->right = new Node(7);
root->right->right = new Node(8);
root->right->right->right = new Node(9);

vector<int>nodes;
getInorder(root,nodes);
root = convertBSTvec(nodes,0,nodes.size()-1);
cout<<endl;
preorder(root);

    return 0;
}