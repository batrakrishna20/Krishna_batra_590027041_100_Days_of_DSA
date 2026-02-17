#include <stdio.h>
int main(){
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int a[100];

    printf("Enter elements: ");
    for(int i=0;i<n;i++) scanf("%d",&a[i]);

    int max=a[0],min=a[0];

    for(int i=1;i<n;i++){
        if(a[i]>max) max=a[i];
        if(a[i]<min) min=a[i];
    }

    printf("Max=%d Min=%d",max,min);
}