#include <stdio.h>
#define MAX 100

int dq[MAX], front=-1,rear=-1;

int main(){
    int n,val;
    printf("Enter number of elements: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&val);
        if(front==-1) front=rear=0;
        else rear++;
        dq[rear]=val;
    }

    printf("Deque: ");
    for(int i=front;i<=rear;i++) printf("%d ",dq[i]);
}