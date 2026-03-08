#include <stdio.h>
#define MAX 5

int q[MAX], front=-1,rear=-1;

int main(){
    int n,val;
    printf("Enter number of elements: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&val);
        rear=(rear+1)%MAX;
        q[rear]=val;
        if(front==-1) front=0;
    }

    printf("Circular Queue: ");
    int i=front;
    while(1){
        printf("%d ",q[i]);
        if(i==rear) break;
        i=(i+1)%MAX;
    }
}