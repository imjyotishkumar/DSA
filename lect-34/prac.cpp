#include<iostream>
#include<vector>
using namespace std;

class Node{
public:
int data;
Node*left;
Node*right;
Node(int data){
    this->data = data;
}
};

Node* insert(Node* root, int val){

    if( root == NULL ){
        root = new Node(val);
        return root;
    }
     
    if( root->data > val ){
        root->left = insert( root->left , val );
    } else{
        root->right = insert( root->right , val );
    }

    return root;
}

Node* BuildBST(int arr[], int n){
Node* root = NULL;
for(int i = 0; i < n; i++){
    root = insert( root , arr[i] );
}
return root;
}

void inorder(Node*root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main(){
    
    int arr[] = {3,2,1,4,5};
    int n = sizeof(arr)/sizeof(int);
    Node*root = BuildBST(arr,n);
    cout<<n<<endl;
    inorder(root);


    return 0;
}