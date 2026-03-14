#include <stdio.h>
#define MAX 100

int queue[MAX], front=-1, rear=-1;

void enqueue(int x){
    if(front==-1) front=0;
    queue[++rear]=x;
}

int dequeue(){
    return queue[front++];
}

int main(){
    int n,val;
    printf("Enter number of elements: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&val);
        enqueue(val);
    }

    printf("Reversed queue: ");
    for(int i=rear;i>=front;i--) printf("%d ",queue[i]);
}