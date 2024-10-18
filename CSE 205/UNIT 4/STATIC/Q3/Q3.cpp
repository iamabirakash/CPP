#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* newNode(int data) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

Node* insert(Node* root, int data) {
    if (root == NULL)
        return newNode(data);

    if (data < root->data)
        root->left = insert(root->left, data);
    else if (data > root->data)
        root->right = insert(root->right, data);

    return root;
}

void inOrderTraversal(Node* root) {
    if (root) {
        inOrderTraversal(root->left);
        cout << root->data << " ";
        inOrderTraversal(root->right);
    }
}

int sumNodes(Node* root) {
    if (root == NULL) return 0;
    return root->data + sumNodes(root->left) + sumNodes(root->right);
}

int countNodes(Node* root) {
    if (root == NULL) return 0;
    return 1 + countNodes(root->left) + countNodes(root->right);
}

Node* deleteNode(Node* root, int key) {
    if (root == NULL) return root;

    if (key < root->data) {
        root->left = deleteNode(root->left, key);
    } else if (key > root->data) {
        root->right = deleteNode(root->right, key);
    } else {
        if (root->left == NULL) {
            Node* temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            Node* temp = root->left;
            free(root);
            return temp;
        }

        Node* temp = root->right;
        while (temp && temp->left != NULL)
            temp = temp->left;

        root->data = temp->data;

        root->right = deleteNode(root->right, temp->data);
    }

    return root;
}

void deleteGreaterThanAverage(Node** root, int avg) {
    if (*root == NULL) return;

    deleteGreaterThanAverage(&(*root)->left, avg);
    deleteGreaterThanAverage(&(*root)->right, avg);

    if ((*root)->data > avg) {
        *root = deleteNode(*root, (*root)->data);
    }
}

int main() {
    Node* root = NULL;
    int n, data;

    cin >> n;
   
    for (int i = 0; i < n; i++) {
        cin >> data;
        root = insert(root, data);
    }

    int sum = sumNodes(root);
    int count = countNodes(root);
    int avg = count ? sum / count : 0;

    deleteGreaterThanAverage(&root, avg);

    
    inOrderTraversal(root);
    cout << endl;

    return 0;
}
