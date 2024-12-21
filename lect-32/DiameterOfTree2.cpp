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

    Node* currDiam = new Node(nodes[idx]);
    currDiam->left = Build_Tree(nodes);
    currDiam->right = Build_Tree(nodes);

    return currDiam;
}

pair<int,int>Diameter(Node* root){
    if(root == NULL){
        return make_pair(0,0);
    }

    pair<int,int>leftinfo = Diameter(root->left);
    pair<int,int>rightinfo = Diameter(root->right);

    int currdiam = leftinfo.second + rightinfo.second + 1;
    int finaldiam = max(currdiam,max(leftinfo.first,rightinfo.first));
    int finalHeight = max(leftinfo.second,rightinfo.second)+1;

    return make_pair(finaldiam,finalHeight);
}



int main(){
    vector<int>nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node*root = Build_Tree(nodes);
cout<<Diameter(root).first;
    return 0;
}