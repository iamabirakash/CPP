// You are using GCC
#include <iostream>
using namespace std;

struct Node {
    int key;
    Node* left;
    Node* right;
    
    Node(int k) : key(k), left(nullptr), right(nullptr) {}
};

void preorderTraversal(Node* root){
    //Type your code here
    if (root == nullptr) {
        return;
    }
    cout << root->key << " ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

int calculateSum(Node* root) {
    //Type your code here
    if (root == nullptr) {
        return 0;
    }
    return root->key + calculateSum(root->left) + calculateSum(root->right);
}

int main() {
    int val1, val2, val3;
    cin >> val1 >> val2 >> val3;

    Node* root = new Node(val1);
    root->left = new Node(val2);
    root->right = new Node(val3);

    int totalSum = calculateSum(root);
    cout << "Total sum of all clothes: " << totalSum;

    return 0;
}
