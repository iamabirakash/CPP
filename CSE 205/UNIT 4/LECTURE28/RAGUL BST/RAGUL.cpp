// You are using GCC
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int value) {
    //Type your code here
    struct Node* n = new Node();
    n->data = value;
    n->right = nullptr;
    n->left = nullptr;
    return n;
}

Node* insertNode(Node* root, int value) {
    //Type your code here
    if(root == nullptr){
        root = createNode(value);
    } else if(value<=root->data){
        root->left = insertNode(root->left,value);
    } else {
        root->right = insertNode(root->right,value);
    }
    return root;
}

bool searchKey(Node* root, int key) {
    //Type your code here
    if(root == nullptr){
        return false;
    } else if(root->data == key){
        return true;
    } else if(key<=root->data){
        return searchKey(root->left,key);
    } else {
        return searchKey(root->right,key);
    }
}

int main() {
    Node* root = NULL;
    int numNodes, value, key;

    cin >> numNodes;

    for (int i = 0; i < numNodes; i++) {
        cin >> value;
        root = insertNode(root, value);
    }

    cin >> key;

    bool found = searchKey(root, key);
    if (found) {
        cout << "The key " << key << " is found in the binary search tree";
    } else {
        cout << "The key " << key << " is not found in the binary search tree";
    }

    return 0;
}
