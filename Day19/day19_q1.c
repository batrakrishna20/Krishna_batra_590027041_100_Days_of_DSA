#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main(){
    int n;
    printf("Enter size: ");
    scanf("%d",&n);
    int a[100];

    printf("Enter elements: ");
    for(int i=0;i<n;i++) scanf("%d",&a[i]);

    int min=INT_MAX;

    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++){
            int sum=a[i]+a[j];
            if(abs(sum)<abs(min)) min=sum;
        }

    printf("Closest sum: %d",min);
}