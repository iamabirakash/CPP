// You are using GCC
#include <iostream>
#include <queue>
using namespace std;
struct TreeNode {
    char data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(char value) : data(value), left(nullptr), right(nullptr) {}
};

TreeNode* CreateNode(int data){
    struct TreeNode* newNode = new TreeNode();
    newNode->data = data;
    newNode->left = newNode->right = nullptr;
    return newNode;
}
TreeNode* insert(TreeNode* root, char data) {
    // if (root == nullptr) {
    //     return new TreeNode(data);
    // }
    // if(root->left==nullptr)
    // root->left = insert(root->left, data);
    // if(root->right==nullptr)
    // root->right = insert(root->right, data);
    // else
    // root->left = insert(root->left, data);
    
    // return root;
    if (root == NULL) {
        root = CreateNode(data);
        return root;
    }
    queue<TreeNode*> q;
    q.push(root);
 
    while (!q.empty()) {
        treeNode* temp = q.front();
        q.pop();
        if (temp->left != NULL)
            q.push(temp->left);
        else {
            temp->left = CreateNode(data);
            return root;
        }
 
        if (temp->right != NULL)
            q.push(temp->right);
        else {
            temp->right = CreateNode(data);
            return root;
        }
    }
}

void postOrder(TreeNode* root) {
    //Type your code here
    if (root == nullptr) {
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}
void freeTree(TreeNode* root) {
    if (root == nullptr) {
        return;
    }
    freeTree(root->left);
    freeTree(root->right);
    delete root;
}

int main() {
    TreeNode* root = nullptr;
    int n;
    char data;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> data;
        root = insert(root, data);
    }

    postOrder(root);
    cout << std::endl;

    freeTree(root);

    return 0;
}
