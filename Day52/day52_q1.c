#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *left,*right;
};

struct node* newNode(int val){
    struct node* t=malloc(sizeof(struct node));
    t->data=val; t->left=t->right=NULL;
    return t;
}

// simple manual tree creation (level order)
struct node* build(){
    int val;
    printf("Enter root value (-1 for NULL): ");
    scanf("%d",&val);
    if(val==-1) return NULL;

    struct node* root=newNode(val);
    root->left=build();
    root->right=build();
    return root;
}

struct node* lca(struct node* root,int a,int b){
    if(!root) return NULL;
    if(root->data==a || root->data==b) return root;

    struct node* left=lca(root->left,a,b);
    struct node* right=lca(root->right,a,b);

    if(left && right) return root;
    return left?left:right;
}

int main(){
    struct node* root=build();
    int a,b;
    printf("Enter two nodes: ");
    scanf("%d %d",&a,&b);

    struct node* ans=lca(root,a,b);
    if(ans) printf("LCA: %d",ans->data);
}