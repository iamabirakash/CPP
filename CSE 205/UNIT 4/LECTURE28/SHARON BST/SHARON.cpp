// You are using GCC
#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* insert(Node* root, int value) {
    if (root == nullptr) {
        Node* newNode = (Node*)malloc(sizeof(Node));
        newNode->data = value;
        newNode->left = newNode->right = nullptr;
        return newNode;
    }
    if (value < root->data) {
        root->left = insert(root->left, value);
    } else {
        root->right = insert(root->right, value);
    }
    return root;
}

Node* deleteOddNodes(Node* root) {
    //Type your code here
    if (root == nullptr) {
        return nullptr;
    }
    
    root->left = deleteOddNodes(root->left);
    root->right = deleteOddNodes(root->right);
    
    if (root->data % 2 != 0) {
        Node* temp;
        if (root->left == nullptr) {
            temp = root->right;
        } else if (root->right == nullptr) {
            temp = root->left;
        } else {
            Node* parent = root;
            temp = root->right;
            while (temp->left != nullptr) {
                parent = temp;
                temp = temp->left;
            }
            if (parent != root) {
                parent->left = temp->right;
                temp->right = root->right;
            }
            temp->left = root->left;
        }
        delete root;
        return temp;
    }
    return root;
}

void printBST(Node* root) {
    if (root == nullptr) {
        return;
    }
    printBST(root->left);
    cout << root->data << " ";
    printBST(root->right);
}

int main() {
    int n;
    cin >> n;
    Node* root = nullptr;

    for (int i = 0; i < n; i++) {
        int data;
        cin >> data;
        root = insert(root, data);
    }

    root = deleteOddNodes(root);
    printBST(root);

    while (root != nullptr) {
        Node* temp = root;
        root = root->right; 
        free(temp);
    }

    return 0;
}
