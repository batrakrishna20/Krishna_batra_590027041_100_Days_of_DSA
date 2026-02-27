#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* create(int n) {
    struct node *head=NULL,*temp,*newnode;
    int val;
    for(int i=0;i<n;i++){
        scanf("%d",&val);
        newnode = (struct node*)malloc(sizeof(struct node));
        newnode->data = val;
        newnode->next = NULL;

        if(head==NULL) head=temp=newnode;
        else { temp->next=newnode; temp=newnode; }
    }
    return head;
}

int main() {
    int n1,n2;
    printf("Enter size of list1: ");
    scanf("%d",&n1);
    printf("Enter elements of list1: ");
    struct node* head1 = create(n1);

    printf("Enter size of list2: ");
    scanf("%d",&n2);
    printf("Enter elements of list2: ");
    struct node* head2 = create(n2);

    // NOTE: true intersection requires shared nodes
    // For demo: we check equal values instead

    struct node *t1=head1;

    printf("Common elements: ");
    while(t1){
        struct node *t2=head2;
        while(t2){
            if(t1->data == t2->data){
                printf("%d ", t1->data);
                break;
            }
            t2=t2->next;
        }
        t1=t1->next;
    }
}