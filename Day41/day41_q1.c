#include <stdio.h>
#include <stdlib.h>

struct node { int data; struct node* next; };
struct node *front=NULL,*rear=NULL;

int main(){
    int n,val;
    printf("Enter number of elements: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&val);
        struct node* newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=val;
        newnode->next=NULL;

        if(rear==NULL) front=rear=newnode;
        else{ rear->next=newnode; rear=newnode; }
    }

    printf("Queue: ");
    struct node* temp=front;
    while(temp){ printf("%d ",temp->data); temp=temp->next; }
}