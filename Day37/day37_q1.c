#include <stdio.h>

int main(){
    int n,a[100];
    printf("Enter size: ");
    scanf("%d",&n);

    printf("Enter elements: ");
    for(int i=0;i<n;i++) scanf("%d",&a[i]);

    // simple priority: sort descending
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
            if(a[i]<a[j]){
                int t=a[i]; a[i]=a[j]; a[j]=t;
            }

    printf("Priority Queue: ");
    for(int i=0;i<n;i++) printf("%d ",a[i]);
}