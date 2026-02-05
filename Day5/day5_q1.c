#include <stdio.h>
int main(){
    int n,m,a[100],b[100],c[200];
    printf("Enter size of first array: ");
    scanf("%d",&n);
    printf("Enter first array: ");
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    printf("Enter size of second array: ");
    scanf("%d",&m);
    printf("Enter second array: ");
    for(int i=0;i<m;i++) scanf("%d",&b[i]);

    int i=0,j=0,k=0;
    while(i<n && j<m){
        if(a[i]<b[j]) c[k++]=a[i++];
        else c[k++]=b[j++];
    }
    while(i<n) c[k++]=a[i++];
    while(j<m) c[k++]=b[j++];

    printf("Merged array: ");
    for(int x=0;x<k;x++) printf("%d ",c[x]);
}