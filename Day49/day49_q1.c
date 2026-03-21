#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *left,*right;
};

struct node* insert(struct node* root,int val){
    if(root==NULL){
        struct node* temp=(struct node*)malloc(sizeof(struct node));
        temp->data=val;
        temp->left=temp->right=NULL;
        return temp;
    }
    if(val<root->data) root->left=insert(root->left,val);
    else root->right=insert(root->right,val);
    return root;
}

int main(){
    struct node* root=NULL;
    root=insert(root,5);
    root=insert(root,3);
    root=insert(root,7);

    printf("BST created.");
}