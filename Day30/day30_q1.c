#include <stdio.h>
#include <stdlib.h>

struct node {
    int coef, exp;
    struct node* next;
};

int main(){
    int n;
    printf("Enter number of terms: ");
    scanf("%d",&n);

    struct node *head=NULL,*temp,*newnode;

    for(int i=0;i<n;i++){
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter coefficient and exponent: ");
        scanf("%d %d",&newnode->coef,&newnode->exp);
        newnode->next=NULL;

        if(head==NULL) head=temp=newnode;
        else{ temp->next=newnode; temp=newnode; }
    }

    printf("Polynomial: ");
    temp=head;
    while(temp){
        printf("%dx^%d", temp->coef, temp->exp);
        if(temp->next) printf(" + ");
        temp=temp->next;
    }
}