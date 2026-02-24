#include <stdio.h>
#include <stdlib.h>
struct node{int data; struct node* next;};

int main(){
    int n,key,val;
    printf("Enter number of nodes: ");
    scanf("%d",&n);

    struct node *head=NULL,*temp,*newnode;

    for(int i=0;i<n;i++){
        scanf("%d",&val);
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=val; newnode->next=NULL;
        if(head==NULL) head=temp=newnode;
        else{ temp->next=newnode; temp=newnode; }
    }

    printf("Enter key to delete: ");
    scanf("%d",&key);

    struct node *curr=head,*prev=NULL;
    while(curr && curr->data!=key){
        prev=curr; curr=curr->next;
    }

    if(curr){
        if(prev==NULL) head=head->next;
        else prev->next=curr->next;
        free(curr);
    }

    printf("Updated list: ");
    temp=head;
    while(temp){ printf("%d ",temp->data); temp=temp->next; }
}