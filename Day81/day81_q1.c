#include <stdio.h>

int main(){
    int n,a[100];
    printf("Enter size: ");
    scanf("%d",&n);

    printf("Enter elements: ");
    for(int i=0;i<n;i++) scanf("%d",&a[i]);

    int maxSum=a[0], curr=a[0];

    for(int i=1;i<n;i++){
        if(curr + a[i] > a[i])
            curr = curr + a[i];
        else
            curr = a[i];

        if(curr > maxSum)
            maxSum = curr;
    }

    printf("Maximum Subarray Sum: %d", maxSum);
}