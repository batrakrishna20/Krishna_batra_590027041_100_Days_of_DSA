#include <stdio.h>

int main(){
    int n,a[100];
    printf("Enter size: ");
    scanf("%d",&n);

    printf("Enter elements: ");
    for(int i=0;i<n;i++) scanf("%d",&a[i]);

    int freq[100]={0};

    for(int i=0;i<n;i++)
        freq[a[i]]++;

    printf("Frequencies:\n");
    for(int i=0;i<100;i++){
        if(freq[i]>0)
            printf("%d -> %d\n",i,freq[i]);
    }
}