#include<iostream>
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

Node* insert(Node* root, int val){
    if(root == NULL){
        root = new Node(val);
        return root;
    }

    if(val<root->data){
    
    root->left = insert(root->left,val);

    } else{
        root->right = insert(root->right, val);
    }
    cout<<root->data;
    return root;
}

Node* BuildBST(int arr[], int n){
    Node* root = NULL;
    for(int i = 0; i< n; i++){
        root = insert(root,arr[i]);
    }
}

int main(){

int arr[6] = {5,1,3,4,2,7};
Node* root = BuildBST(arr,6);


    return 0;
}