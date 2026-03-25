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
    printf("Demo: enter -1 for NULL\n");
    struct node* root=NULL;
    // simple static tree
    root = malloc(sizeof(struct node));
    root->data=1;
    root->left=root->right=NULL;

    inorder(root);
}