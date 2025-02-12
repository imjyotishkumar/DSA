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

Node* BuildBSTfromSorted(vector<int>arr, int st, int end){
    if(st>end){
        return NULL;
    }
    int mid = st + (end - st)/2;
    Node* curr = new Node(arr[mid]);
    curr->left = BuildBSTfromSorted(arr,st,mid-1);
    curr->right = BuildBSTfromSorted(arr,mid+1,end);
    return curr;
}

void preorder(Node* root){
    if(root == NULL){
        return;
    }

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

int main(){
vector<int>arr = {3,4,5,6,7,8,9};
Node* root = BuildBSTfromSorted(arr,0,arr.size()-1);
preorder(root);
    return 0;
}