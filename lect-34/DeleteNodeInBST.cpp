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

    if(root->data > val){
        root->left = insert(root->left, val);
    } else{
        root->right = insert(root->right, val);
    }

    return root;
}


Node* BuildBST(int *arr, int n){
    Node* root = NULL;
    for(int i = 0; i<n; i++){
        root = insert(root, arr[i]);
    }
    return root;
}

void inorder(Node* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

Node* getinordersuccessor(Node*root){
    while(root->left!=NULL){
        root = root->left;
    }
    return root;
}

Node* delNode(Node*root, int val){
    if(root == NULL){
        return NULL;
    }
    if(val<root->data){
        root->left = delNode(root->left, val);
    } else if(val>root->data){
        root->right = delNode(root->right, val);
    } else{
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }
        if(root->left == NULL || root->right == NULL){
            return root->left == NULL ? root->right:root->left;
        }
        Node* IS = getinordersuccessor(root->right);
        root->data = IS->data;
        root->right = delNode(root->right,IS->data);
        return root;
    }
}

int main(){
    
    int arr[] = {8,5,3,1,4,6,10,11,14};
    int n = sizeof(arr) / sizeof(int);
    Node* root = BuildBST(arr,n);
    inorder(root);
    cout<<endl;
    delNode(root,5);
    inorder(root);

    return 0;
}