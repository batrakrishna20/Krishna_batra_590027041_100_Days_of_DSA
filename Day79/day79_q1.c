#include <stdio.h>

int main(){
    int n,a[100];
    printf("Enter size: ");
    scanf("%d",&n);

    printf("Enter elements: ");
    for(int i=0;i<n;i++) scanf("%d",&a[i]);

    for(int i=0;i<n;i++){
        int min=i;
        for(int j=i+1;j<n;j++)
            if(a[j]<a[min]) min=j;

        int t=a[i]; a[i]=a[min]; a[min]=t;
    }

    printf("Sorted: ");
    for(int i=0;i<n;i++) printf("%d ",a[i]);
}