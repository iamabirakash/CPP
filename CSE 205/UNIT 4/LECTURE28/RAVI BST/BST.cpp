// You are using GCC
#include <iostream>
using namespace std;

struct node {
    int data;
    struct node* left;
    struct node* right;
};

struct node* root;

void append(int d) {
    //Type your code here
    struct node* n = new node();
    n->data = d;
    n->left = nullptr;
    n->right = nullptr;
    if(root == nullptr){
        root = n;
        return;
    }
    struct node* curr = root;
    struct node* par = nullptr;
    while(curr!=nullptr){
        par = curr;
        if(d<curr->data){
            curr = curr->left;
        } else {
            curr = curr->right;
        }
    }
    if(d<par->data){
        par->left = n;
    } else {
        par->right = n;
    }
}

void postorder(struct node* root) {
    //Type your code here
    if (root != nullptr) {
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }
}

int main() {
    int d;
    do {
        cin >> d;
        if (d > 0)
            append(d);
    } while (d != -1);

    postorder(root);

    return 0;
}
