#include <stdio.h>
#define SIZE 10

int hash[SIZE]={0};

int main(){
    int n,x;
    printf("Enter number of elements: ");
    scanf("%d",&n);

    printf("Enter elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        hash[x%SIZE]++;
    }

    printf("Hash table (frequency): ");
    for(int i=0;i<SIZE;i++)
        printf("%d ",hash[i]);
}