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

Node* insert(Node* root, int val){
    if(root == NULL){
        root = new Node(val);
        return root;
    }

    if(val < root->data){
        root->left = insert(root->left,val);
    } else{
        root->right = insert(root->right, val);
    }

    return root;
}

Node* BuildBST(int arr[], int n){
    Node* root = NULL;
    for(int i = 0; i<n; i++){
        root = insert(root,arr[i]);
    }
    return root;
}

void Inorder(Node* root){
    if(root == NULL){
        return;
    }

    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
}

void printinrange(Node*root, int start, int end){
    if(root == NULL){
        return;
    }
    if(start<=root->data && root->data<=end){
        printinrange(root->left,start,end);
        cout<<root->data<<" ";
        printinrange(root->right,start,end);
    } else if(root->data < start){
        printinrange(root->right, start,end);
    } else{
        printinrange(root->left,start,end);
    }
}

int main(){
int arr[] = {8,5,3,1,4,6,10,11,14};
int n = sizeof(arr) / sizeof(int);
Node* root = BuildBST(arr,n);
Inorder(root);
cout<<endl;
printinrange(root,2,15);


    return 0;
}