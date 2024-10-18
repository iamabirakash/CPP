// You are using GCC
#include <iostream>
#include<stdlib.h>

using namespace std;

struct tnode
{
    int data;
    struct tnode *right;
    struct tnode *left;
};

struct tnode *CreateBST(struct tnode *, int);
void Inorder(struct tnode *);
void Preorder(struct tnode *);
void Postorder(struct tnode *);

int main(){
    struct tnode *root = NULL;
    int choice, item, n, i;
    do
    {
        cin>>choice;
        switch(choice)
        {
        case 1:
            root = NULL;
            cin>>n;
            for(i = 1; i <= n; i++)
            {
                cin>>item;
                root = CreateBST(root,item);
            }
            break;
        case 2:
            cout<<"Inorder: ";
            Inorder(root);
            cout<<"\n";
            break;
        case 3:
            cout<<"Preorder: ";
            Preorder(root);
            cout<<"\n";
            break;
        case 4:
            cout<<"Postorder: ";
            Postorder(root);
            cout<<"\n";
            break;
        case 5:
            exit(0);
            break;
        default:
            break;
        }
    } while(1);
    return 0;
}

struct tnode *CreateBST(struct tnode *root, int item) {
    //Type your code here
    struct tnode *n = new tnode;
    n->data = item;
    n->left = NULL;
    n->right = NULL;
    if(root==NULL){
        root = n;
    }
    else {
        struct tnode *save=NULL,*ptr=root;
        while(ptr!=NULL){
            if(item<ptr->data){
                save = ptr;
                ptr = ptr->left;
            } else {
                save = ptr;
                ptr = ptr->right;
            }
        }
        if(item<save->data){
            save->left = n; 
        } else {
            save->right = n;
        }
    }
    return root;
}

void Inorder(struct tnode *root) {
    //Type your code here
    struct tnode *n = root;
    if(n!=NULL){
        Inorder(n->left);
        cout<<n->data<<" ";
        Inorder(n->right);
    }
}

void Preorder(struct tnode *root) {
    //Type your code here
    // struct tnode *n = root;
    if(root!=NULL){
        cout<<root->data<<" ";
        Preorder(root->left);
        Preorder(root->right);
    }
    
}

void Postorder(struct tnode *root) {
    //Type your code here
    // struct tnode *n = root;
    if(root!=NULL){
        Postorder(root->left);
        Postorder(root->right);
        cout<<root->data<<" ";
    }
}
