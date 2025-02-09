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

Node* insert(Node*root, int val){
    if(root == NULL){
        root = new Node(val);
        return root;
    }

    if( val < root->data){
        root->left = insert(root->left, val);
    } else{
        root->right = insert(root->right, val);
    }

    return root;
}

Node* BuildBST(int arr[] , int n){
    Node* root = NULL;

    for(int i = 0; i< n; i++){
        root = insert(root, arr[i]);
    }

    return root;
}

void inorder(Node*root){
    if(root== NULL){
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

bool validateHelper(Node*root,Node*min, Node* max){
    if(root == NULL){
        return true;
    }
    if(min!=NULL&&root->data<min->data){
        return false;
    }
    if(max!=NULL&&root->data>max->data){
        return false;
    }
    return validateHelper(root->left,min,root) && validateHelper(root->right,root,max);
}

bool validateBST(Node* root){
    return validateHelper(root,NULL,NULL);
}

int main(){
    int arr[] = {5,1,4,3,7};
    int n = sizeof(arr)/sizeof(int);
    Node* root = BuildBST(arr,n);
    inorder(root);
    cout<<endl;
    cout<<validateBST(root);
    return 0;
}