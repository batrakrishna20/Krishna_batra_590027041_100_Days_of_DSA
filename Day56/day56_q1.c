#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *left,*right;
};

int isMirror(struct node* a, struct node* b){
    if(!a && !b) return 1;
    if(!a || !b) return 0;
    return (a->data==b->data &&
            isMirror(a->left,b->right) &&
            isMirror(a->right,b->left));
}

int main(){
    printf("Symmetry check implemented via mirror recursion");
}