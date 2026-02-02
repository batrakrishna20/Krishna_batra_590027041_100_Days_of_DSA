#include <stdio.h>
int main() {
    int n,pos,arr[100];
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    printf("Enter position to delete: ");
    scanf("%d",&pos);

    for(int i=pos;i<n-1;i++) arr[i]=arr[i+1];
    n--;

    printf("Updated array: ");
    for(int i=0;i<n;i++) printf("%d ",arr[i]);
}