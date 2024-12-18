#include<iostream>
#include<vector>
using namespace std;

class Node{
public:
int data;
Node * left;
Node* right;

Node(int data){
    this->data = data;
    left = right = NULL;
}

};

static int idx = -1;

Node* Build_trees(vector<int>nodes){
    
      idx++;
      if(nodes[idx] == -1){
        return NULL;
      }

      Node* currnode = new Node(nodes[idx]);
      currnode->left = Build_trees(nodes);
      currnode->right = Build_trees(nodes);

      return currnode;
}

int height(Node*root){
    if(root == NULL){
        return 0;
    }
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
     int currHeight = max(leftHeight,rightHeight)+1;
    
     return currHeight;
    
}

int diameter(Node* root){
    if(root == NULL){
        return 0;
    }

    int currDiameter = height(root->left)+height(root->right)+1;
    int leftDiameter = height(root->left);
    int rightDiameter = height(root->right);

    int diadmeteroftree = max(currDiameter,max(leftDiameter,rightDiameter));
    return diadmeteroftree;
}

int main(){

vector<int>nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
Node* root = Build_trees(nodes);
height(root);
cout<<diameter(root);
    return 0;
}