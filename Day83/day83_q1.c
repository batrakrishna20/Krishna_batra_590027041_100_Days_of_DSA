#include <stdio.h>

int main(){
    int n,a[100];
    printf("Enter size: ");
    scanf("%d",&n);

    printf("Enter elements: ");
    for(int i=0;i<n;i++) scanf("%d",&a[i]);

    int max=a[0], second=-1;

    for(int i=1;i<n;i++){
        if(a[i]>max){
            second=max;
            max=a[i];
        }
        else if(a[i]>second && a[i]!=max){
            second=a[i];
        }
    }

    printf("Second Largest: %d", second);
}