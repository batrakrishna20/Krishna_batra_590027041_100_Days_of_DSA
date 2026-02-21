#include <stdio.h>
#include <stdlib.h>
struct node{int data; struct node* next;};

int main(){
    int n, val;
    printf("Enter number of nodes: ");
    scanf("%d",&n);

    struct node *head=NULL,*temp,*newnode;

    for(int i=0;i<n;i++){
        printf("Enter value: ");
        scanf("%d",&val);
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=val;
        newnode->next=NULL;

        if(head==NULL) head=temp=newnode;
        else{ temp->next=newnode; temp=newnode; }
    }

    printf("Linked List: ");
    temp=head;
    while(temp){ printf("%d ",temp->data); temp=temp->next; }
}