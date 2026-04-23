#include <stdio.h>

int main(){
    int n,a[100],sum;
    printf("Enter size: ");
    scanf("%d",&n);

    printf("Enter elements: ");
    for(int i=0;i<n;i++) scanf("%d",&a[i]);

    printf("Enter target sum: ");
    scanf("%d",&sum);

    int found=0;

    for(int i=0;i<n;i++){
        int curr=0;
        for(int j=i;j<n;j++){
            curr+=a[j];
            if(curr==sum){
                printf("Subarray found from %d to %d",i,j);
                found=1;
                break;
            }
        }
        if(found) break;
    }

    if(!found) printf("No subarray found");
}