#include <stdio.h>
#include <stdlib.h>

struct node{int data; struct node *left,*right;};

struct node* insert(struct node* root,int val){
    if(!root){
        struct node* t=malloc(sizeof(struct node));
        t->data=val; t->left=t->right=NULL;
        return t;
    }
    if(val<root->data) root->left=insert(root->left,val);
    else root->right=insert(root->right,val);
    return root;
}

struct node* lca(struct node* root,int a,int b){
    if(!root) return NULL;
    if(root->data > a && root->data > b) return lca(root->left,a,b);
    if(root->data < a && root->data < b) return lca(root->right,a,b);
    return root;
}

int main(){
    int n,val,a,b;
    struct node* root=NULL;
    printf("Enter number of nodes: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(int i=0;i<n;i++){ scanf("%d",&val); root=insert(root,val); }
    printf("Enter two nodes: ");
    scanf("%d %d",&a,&b);

    struct node* ans=lca(root,a,b);
    if(ans) printf("LCA: %d",ans->data);
}