#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *left,*right;
};

void inorder(struct node* root){
    if(root){
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}

int main(){
    struct node* root=(struct node*)malloc(sizeof(struct node));
    root->data=1;
    root->left=root->right=NULL;

    inorder(root);
}