#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

int main(){
    int n,k,val;
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

    printf("Enter k: ");
    scanf("%d",&k);

    if(!head || k==0) return 0;

    // find length
    int len=1;
    temp=head;
    while(temp->next){
        temp=temp->next;
        len++;
    }

    // make circular
    temp->next=head;

    k = k % len;
    int steps = len - k;

    temp=head;
    for(int i=1;i<steps;i++)
        temp=temp->next;

    head=temp->next;
    temp->next=NULL;

    printf("Rotated list: ");
    temp=head;
    while(temp){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}