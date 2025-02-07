#include <iostream>
#include <vector>
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

Node* Build_Tree(vector<int> nodes) {
    idx++;
    if (nodes[idx] == -1) {
        return NULL;
    }

    Node* currNode = new Node(nodes[idx]);
    currNode->left = Build_Tree(nodes);
    currNode->right = Build_Tree(nodes);
    return currNode;
}

bool rootToNodePath(Node* root, int n, vector<int>& path) {
    if (root == NULL) {
        return false;
    }

    path.push_back(root->data);
    if (root->data == n) {
        return true;
    }

    int isleft = rootToNodePath(root->left, n, path);
    int isright = rootToNodePath(root->right, n, path);

    if (isleft || isright) {
        return true;
    }
    path.pop_back();
    return false;
}

int LCA(Node* root, int n1, int n2) {
    vector<int> path1;
    vector<int> path2;

    rootToNodePath(root, n1, path1);
    rootToNodePath(root, n2, path2);

    int lca = -1;

    for (int i = 0, j = 0; i < path1.size() && j < path2.size(); i++, j++) {
        if (path1[i] != path2[j]) {
            return lca;
        }
        lca = path1[i];
    }
    return lca; // Added return statement
}

int dist(Node* root, int n) {
    if (root == NULL) {
        return -1;
    }

    if (root->data == n) {
        return 0;
    }

    int leftdist = dist(root->left, n);
    if (leftdist != -1) {
        return leftdist + 1;
    }

    int rightdist = dist(root->right, n);
    if (rightdist != -1) {
        return rightdist + 1;
    }

    return -1;
}

int minDist(Node* root, int n1, int n2) {
    int lca = LCA(root, n1, n2); 
    int dist1 = dist(root, n1); 
    int dist2 = dist(root, n2); 

    return dist1 + dist2;
}

int main() {
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node* root = Build_Tree(nodes);
    int n1 = 4, n2 = 5;
    cout << minDist(root, n1, n2); 
    return 0;
}