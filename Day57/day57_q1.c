#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *left,*right;
};

void mirror(struct node* root){
    if(!root) return;
    struct node* temp=root->left;
    root->left=root->right;
    root->right=temp;

    mirror(root->left);
    mirror(root->right);
}

int main(){
    printf("Mirror function swaps left and right");
}