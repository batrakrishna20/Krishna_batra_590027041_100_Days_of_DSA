#include <stdio.h>
#define MAX 100

int q[MAX], front=-1,rear=-1;

int main(){
    int n,val;
    printf("Enter number of elements: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&val);
        if(front==-1) front=0;
        q[++rear]=val;
    }

    printf("Queue: ");
    for(int i=front;i<=rear;i++) printf("%d ",q[i]);
}