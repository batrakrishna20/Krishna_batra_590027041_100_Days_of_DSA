#include <stdio.h>
int main() {
    int n,key,arr[100],count=0;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    printf("Enter element to search: ");
    scanf("%d",&key);

    for(int i=0;i<n;i++){
        count++;
        if(arr[i]==key){
            printf("Found at index %d with %d comparisons",i,count);
            return 0;
        }
    }
    printf("Not found, comparisons: %d",count);
}