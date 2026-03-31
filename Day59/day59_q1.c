#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *left,*right;
};

int search(int arr[], int start, int end, int val){
    for(int i=start;i<=end;i++)
        if(arr[i]==val) return i;
    return -1;
}

struct node* build(int in[], int post[], int inStart, int inEnd, int* postIndex){
    if(inStart>inEnd) return NULL;

    struct node* root=malloc(sizeof(struct node));
    root->data=post[*postIndex];
    root->left=root->right=NULL;
    (*postIndex)--;

    if(inStart==inEnd) return root;

    int inIndex=search(in,inStart,inEnd,root->data);

    root->right=build(in,post,inIndex+1,inEnd,postIndex);
    root->left=build(in,post,inStart,inIndex-1,postIndex);

    return root;
}

int main(){
    int n;
    printf("Enter size: ");
    scanf("%d",&n);

    int in[n], post[n];
    printf("Enter inorder: ");
    for(int i=0;i<n;i++) scanf("%d",&in[i]);
    printf("Enter postorder: ");
    for(int i=0;i<n;i++) scanf("%d",&post[i]);

    int postIndex=n-1;
    struct node* root=build(in,post,0,n-1,&postIndex);

    printf("Tree built successfully");
}