#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *left,*right;
};

int height(struct node* root){
    if(root==NULL) return 0;
    int l=height(root->left);
    int r=height(root->right);
    return (l>r?l:r)+1;
}

int main(){
    struct node* root=NULL;
    printf("Height: %d",height(root));
}