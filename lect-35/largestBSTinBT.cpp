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
        left = right = NULL;
    }
};

class info{
     public:
     bool isBST;
     int min;
     int max;
     int sz;
     info(bool isBST, int min, int max, int sz){
        this->isBST = isBST;
        this->min = min;
        this->max = max;
        this->sz = sz;
     }
};

static int maxsize;
info*largestBST(Node*root){
    if(root == NULL){
        return new info(true,INT16_MAX,INT16_MIN,0);
    }

    info* leftinfo = largestBST(root->left);
    info* rightinfo = largestBST(root->right);

    int currmin = min(root->data, min(leftinfo->min,rightinfo->min));
    int currmax = max(root->data, max(leftinfo->max,rightinfo->max));

    int currsize = leftinfo->sz + rightinfo->sz + 1;
    if(leftinfo->isBST && rightinfo->isBST
       && root->data > leftinfo->max
       && root->data < rightinfo->min
      ){
        maxsize = max(maxsize, currsize);
        return new info(true,currmin,currmax,currsize);
      }
      return new info(false,currmin,currmax,currsize);
}

int main(){

    Node* root = new Node(50);
    root->left = new Node(30);
    root->left->left = new Node(5);
    root->left->right = new Node(20);

    root->right = new Node(60);
    root->right->left = new Node(45);
    root->right->right = new Node(70);
    root->right->right->left = new Node(65);
    root->right->right->right = new Node(80);

    largestBST(root);
    cout<<"max size: "<<maxsize<<endl;

    return 0;
}