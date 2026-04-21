#include <stdio.h>

int main(){
    int n,a[100],key,l=0,r;
    printf("Enter size: ");
    scanf("%d",&n);

    printf("Enter sorted elements: ");
    for(int i=0;i<n;i++) scanf("%d",&a[i]);

    printf("Enter key: ");
    scanf("%d",&key);

    r=n-1;
    while(l<=r){
        int m=(l+r)/2;
        if(a[m]==key){
            printf("Found at %d",m);
            return 0;
        }
        else if(a[m]<key) l=m+1;
        else r=m-1;
    }

    printf("Not found");
}