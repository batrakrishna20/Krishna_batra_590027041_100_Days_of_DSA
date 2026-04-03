#include <stdio.h>
#include <stdlib.h>
struct node{int data; struct node* next;};

int main(){
    int n,e,u,v;
    printf("Enter vertices and edges: ");
    scanf("%d %d",&n,&e);
    struct node* adj[n];
    for(int i=0;i<n;i++) adj[i]=NULL;

    printf("Enter edges (u v):\n");
    for(int i=0;i<e;i++){
        scanf("%d %d",&u,&v);
        struct node* newnode=malloc(sizeof(struct node));
        newnode->data=v;
        newnode->next=adj[u];
        adj[u]=newnode;
    }

    for(int i=0;i<n;i++){
        printf("%d: ",i);
        struct node* temp=adj[i];
        while(temp){
            printf("%d ",temp->data);
            temp=temp->next;
        }
        printf("\n");
    }
}