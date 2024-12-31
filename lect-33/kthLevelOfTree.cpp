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

static int idx = -1;

Node* Build_Tree(vector<int>nodes){
    idx++;
    if(nodes[idx]==-1){
        return NULL;
    }
    
    Node* currNode = new Node(nodes[idx]);
    currNode->left = Build_Tree(nodes);
    currNode->right = Build_Tree(nodes);

    return currNode;
}

void helpkthnode(Node* root, int k, int Currlevel){
    if(root == NULL){
        return;
    }

    if(Currlevel == k){
        cout<<root->data<<" ";
    }
    helpkthnode(root->left, k, Currlevel+1);
    helpkthnode(root->right, k, Currlevel+1);
}

void kthlevel(Node*root, int k){
    helpkthnode(root, k, 1);
    cout<<endl;
}

int main(){


vector<int>nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
Node* root = Build_Tree(nodes);
kthlevel(root,3);

    return 0;
}