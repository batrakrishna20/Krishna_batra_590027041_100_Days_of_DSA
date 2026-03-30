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

struct node* build(int in[], int pre[], int inStart, int inEnd, int* preIndex){
    if(inStart>inEnd) return NULL;

    struct node* root=malloc(sizeof(struct node));
    root->data=pre[*preIndex];
    root->left=root->right=NULL;
    (*preIndex)++;

    if(inStart==inEnd) return root;

    int inIndex=search(in,inStart,inEnd,root->data);

    root->left=build(in,pre,inStart,inIndex-1,preIndex);
    root->right=build(in,pre,inIndex+1,inEnd,preIndex);

    return root;
}

int main(){
    int n;
    printf("Enter size: ");
    scanf("%d",&n);

    int in[n], pre[n];
    printf("Enter inorder: ");
    for(int i=0;i<n;i++) scanf("%d",&in[i]);
    printf("Enter preorder: ");
    for(int i=0;i<n;i++) scanf("%d",&pre[i]);

    int preIndex=0;
    struct node* root=build(in,pre,0,n-1,&preIndex);

    printf("Tree built successfully");
}