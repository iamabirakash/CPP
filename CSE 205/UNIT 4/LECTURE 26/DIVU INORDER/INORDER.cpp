// You are using GCC
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int v) : data(v), left(nullptr), right(nullptr) {}
};

void printInorder(Node* node){
    //Type your code here
    if(node==nullptr){
        return;
    }
    printInorder(node->left);
    cout<<node->data<<" ";
    printInorder(node->right);
}

void printInorderReverse(Node* node){
    //Type your code here
    if(node==nullptr){
        return;
    }
    printInorderReverse(node->right);
    cout<<node->data<<" ";
    printInorderReverse(node->left);
}

Node* insertLevelOrder(int arr[], Node* root, int i, int n) {
    //Type your code here
    if(i<n){
        Node *temp = new Node(arr[i]);
        root = temp;
        root->left = insertLevelOrder(arr,root->left,2*i+1,n);
        root->right = insertLevelOrder(arr,root->right,2*i+2,n);
    }
    return root;
}

int main() {
    int n;
    cin >> n;

    int* arr = new int[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    Node* root = nullptr;
    root = insertLevelOrder(arr, root, 0, n);

    printInorder(root);
    cout << endl;
    printInorderReverse(root);
    
    delete[] arr;

    return 0;
}
