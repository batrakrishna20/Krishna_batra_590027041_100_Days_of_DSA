#include <stdio.h>
int main(){
    int n,k;
    printf("Enter size: ");
    scanf("%d",&n);
    int a[100];

    printf("Enter elements: ");
    for(int i=0;i<n;i++) scanf("%d",&a[i]);

    printf("Enter k: ");
    scanf("%d",&k);

    for(int r=0;r<k;r++){
        int t=a[0];
        for(int i=0;i<n-1;i++) a[i]=a[i+1];
        a[n-1]=t;
    }

    printf("Rotated array: ");
    for(int i=0;i<n;i++) printf("%d ",a[i]);
}