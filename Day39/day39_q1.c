#include <stdio.h>

int heap[100], size=0;

void insert(int val){
    int i=size++;
    heap[i]=val;
    while(i!=0 && heap[(i-1)/2]>heap[i]){
        int t=heap[i];
        heap[i]=heap[(i-1)/2];
        heap[(i-1)/2]=t;
        i=(i-1)/2;
    }
}

int main(){
    int n,val;
    printf("Enter number of elements: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&val);
        insert(val);
    }

    printf("Min Heap: ");
    for(int i=0;i<size;i++) printf("%d ",heap[i]);
}