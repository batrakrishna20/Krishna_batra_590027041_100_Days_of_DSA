#include <stdio.h>
#include <stdlib.h>
struct node{int data; struct node* next;};

int main(){
    int n,val;
    printf("Enter number of nodes: ");
    scanf("%d",&n);

    struct node *head=NULL,*temp,*newnode;

    for(int i=0;i<n;i++){
        scanf("%d",&val);
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=val;
        newnode->next=NULL;

        if(head==NULL) head=temp=newnode;
        else{ temp->next=newnode; temp=newnode; }
    }
    temp->next=head;

    printf("Circular list traversal: ");
    struct node* t=head;
    for(int i=0;i<n;i++){
        printf("%d ",t->data);
        t=t->next;
    }
}