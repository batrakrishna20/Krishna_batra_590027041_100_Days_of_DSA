#include <stdio.h>
#define SIZE 10

int hash[SIZE];

int main(){
    int n,x;
    for(int i=0;i<SIZE;i++) hash[i]=-1;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    printf("Enter elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        int idx=x%SIZE;
        while(hash[idx]!=-1)
            idx=(idx+1)%SIZE;
        hash[idx]=x;
    }

    printf("Hash table: ");
    for(int i=0;i<SIZE;i++)
        printf("%d ",hash[i]);
}