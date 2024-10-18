// You are using GCC
#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

TreeNode* buildTree() {
    //Type your code here
    int x;
    cin >> x;
    if (x == -1) {
        return nullptr;
    }
    TreeNode* node = new TreeNode(x);
    node->left = buildTree();
    node->right = buildTree();
    
    return node;
}

int sumOfNodes(TreeNode* root) {
    //Type your code here
    if (root == nullptr) {
        return 0;
    }
    return root->val + sumOfNodes(root->left) + sumOfNodes(root->right);
}

void postorderTraversal(TreeNode* root) {
    //Type your code here
    if (root == nullptr) {
        return;
    }
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout << root->val << " "; 
}

int main() {
    
    TreeNode* root = buildTree();

    cout << "Postorder Traversal: ";
    postorderTraversal(root);
    cout << endl;

    int sum = sumOfNodes(root);
    cout << "Sum of all nodes: " << sum;

    return 0;
}
