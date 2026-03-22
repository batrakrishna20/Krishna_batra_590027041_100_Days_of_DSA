#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *left,*right;
};

int search(struct node* root,int key){
    if(root==NULL) return 0;
    if(root->data==key) return 1;
    if(key<root->data) return search(root->left,key);
    return search(root->right,key);
}

int main(){
    printf("BST search demo.");
}