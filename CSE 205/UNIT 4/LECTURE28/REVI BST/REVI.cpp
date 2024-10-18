// You are using GCC
#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node* left;
    struct node* right;
};

struct node* root;

struct node* createNode(int d){
    //Type your code here
    struct node* n = new node();
    n->data = d;
    n->right = nullptr;
    n->left = nullptr;
    return n;
}

struct node* insert(struct node* root, int value){
    //Type your code here
    if(root == nullptr){
        root = createNode(value);
    } else if(value<=root->data){
        root->left = insert(root->left,value);
    } else {
        root->right = insert(root->right,value);
    }
    return root;
}
int addBST(struct node* root){
    if (root == NULL)
        return 0;

    return (root->data + addBST(root->left) + addBST(root->right));
}

int main()
{
    int d;
    do
    {
        cin >> d;
        if (d > 0)
            root = insert(root, d);
    } while (d != -1);

    int sum = addBST(root);
    cout << "Sum of all nodes in the BST is " << sum;

    return 0;
}
