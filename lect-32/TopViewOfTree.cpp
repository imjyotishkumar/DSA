#include<iostream>
#include<vector>
#include<queue>
#include<map>
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

Node* Build_Trees(const vector<int>& nodes) {
    idx++;
    if (idx >= nodes.size() || nodes[idx] == -1) {
        return NULL;
    }

    Node* currNode = new Node(nodes[idx]);
    currNode->left = Build_Trees(nodes);
    currNode->right = Build_Trees(nodes);
    return currNode;
}

void TopViewOfTree(Node* root) {
    if (!root) {
        return;
    }

    queue<pair<Node*, int>> Q;
    map<int, int> m;

    Q.push(make_pair(root, 0));

    while (!Q.empty()) {
        pair<Node*, int> curr = Q.front();
        Q.pop();

        Node* CurrNode = curr.first;
        int currHD = curr.second;

        if (m.count(currHD) == 0) {
            m[currHD] = CurrNode->data;
        }

        if (CurrNode->left != NULL) {
            Q.push(make_pair(CurrNode->left, currHD - 1));
        }

        if (CurrNode->right != NULL) {
            Q.push(make_pair(CurrNode->right, currHD + 1));
        }
    }

    for (auto it : m) {
        cout << it.second << " ";
    }
    cout << endl;
}

int main() {
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node* root = Build_Trees(nodes);
    TopViewOfTree(root);

    return 0;
}
