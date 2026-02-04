#include <stdio.h>
int main(){
    int n,arr[100];
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);

    for(int i=0;i<n/2;i++){
        int t=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=t;
    }

    printf("Reversed array: ");
    for(int i=0;i<n;i++) printf("%d ",arr[i]);
}