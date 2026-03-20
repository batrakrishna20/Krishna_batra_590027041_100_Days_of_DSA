#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *left,*right;
};

int countLeaves(struct node* root){
    if(root==NULL) return 0;
    if(root->left==NULL && root->right==NULL) return 1;
    return countLeaves(root->left)+countLeaves(root->right);
}

int main(){
    printf("Leaf count demo.");
}