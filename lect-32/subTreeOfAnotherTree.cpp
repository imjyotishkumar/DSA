#include<iostream>
#include<vector>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
    
    Node(int data) {
        this->data = data;
        left = right = NULL;
    }
};

static int idx = -1;

Node* Build_trees(vector<int> nodes) {
    idx++;
    if (nodes[idx] == -1) {
        return NULL;
    }
    
    Node* currNode = new Node(nodes[idx]);
    currNode->left = Build_trees(nodes);
    currNode->right = Build_trees(nodes);
    return currNode;
}

bool isIdentical(Node* root, Node* subroot) {
    if (root == NULL && subroot == NULL) {
        return true;
    } else if (root == NULL || subroot == NULL) {
        return false;
    }

    if (root->data != subroot->data) {
        return false;
    }

    return isIdentical(root->left, subroot->left) && isIdentical(root->right, subroot->right);
}

bool iss(Node* root, Node* subroot) {
    if (root == NULL) {
        return false;
    }

    if (isIdentical(root, subroot)) {
        return true;
    }

    return iss(root->left, subroot) || iss(root->right, subroot);
}

int main() {
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node* root = Build_trees(nodes);

    Node* subroot = new Node(2);
    subroot->left = new Node(4);
    subroot->right = new Node(5);

    bool result = iss(root, subroot);
    
    if (result) {
        cout << "Subtree found!" << endl;
    } else {
        cout << "Subtree not found!" << endl;
    }

    return 0;
}
