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

TreeNode* insert(TreeNode* root, char data) {
    if (root == nullptr) {
        return new TreeNode(data);
    }

    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        TreeNode* temp = q.front();
        q.pop();

        if (temp->left == nullptr) {
            temp->left = new TreeNode(data);
            break;
        } else {
            q.push(temp->left);
        }

        if (temp->right == nullptr) {
            temp->right = new TreeNode(data);
            break;
        } else {
            q.push(temp->right);
        }
    }
    return root;
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
