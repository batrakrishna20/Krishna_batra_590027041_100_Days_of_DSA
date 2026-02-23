#include <stdio.h>
#include <stdlib.h>
struct node{int data; struct node* next;};

struct node* create(int n){
    struct node *head=NULL,*temp,*newnode;
    int val;
    for(int i=0;i<n;i++){
        scanf("%d",&val);
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=val; newnode->next=NULL;
        if(head==NULL) head=temp=newnode;
        else{ temp->next=newnode; temp=newnode; }
    }
    return head;
}

int main(){
    int n1,n2;
    printf("Enter size of list1: "); scanf("%d",&n1);
    printf("Enter elements: ");
    struct node* l1=create(n1);

    printf("Enter size of list2: "); scanf("%d",&n2);
    printf("Enter elements: ");
    struct node* l2=create(n2);

    struct node dummy; struct node* tail=&dummy; tail->next=NULL;

    while(l1 && l2){
        if(l1->data < l2->data){ tail->next=l1; l1=l1->next; }
        else{ tail->next=l2; l2=l2->next; }
        tail=tail->next;
    }
    tail->next = l1 ? l1 : l2;

    printf("Merged List: ");
    struct node* t=dummy.next;
    while(t){ printf("%d ",t->data); t=t->next; }
}