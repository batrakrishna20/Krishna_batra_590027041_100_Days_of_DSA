#include <stdio.h>

int main(){
    int n,key,a[100],found=0;
    printf("Enter size: ");
    scanf("%d",&n);

    printf("Enter elements: ");
    for(int i=0;i<n;i++) scanf("%d",&a[i]);

    printf("Enter key: ");
    scanf("%d",&key);

    for(int i=0;i<n;i++){
        if(a[i]==key){
            printf("Found at %d",i);
            found=1;
            break;
        }
    }
    if(!found) printf("Not found");
}