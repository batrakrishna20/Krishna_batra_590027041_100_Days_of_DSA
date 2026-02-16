#include <stdio.h>
int main(){
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int a[100];

    printf("Enter elements: ");
    for(int i=0;i<n;i++) scanf("%d",&a[i]);

    for(int i=0;i<n;i++){
        int count=1;
        if(a[i]==-1) continue;

        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                count++;
                a[j]=-1;
            }
        }
        printf("%d occurs %d times\n",a[i],count);
    }
}