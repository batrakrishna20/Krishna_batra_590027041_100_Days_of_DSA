#include <stdio.h>
int main(){
    int n,sum=0;
    printf("Enter size: ");
    scanf("%d",&n);
    int a[100][100];

    printf("Enter matrix:\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);

    for(int i=0;i<n;i++){
        sum+=a[i][i];
        sum+=a[i][n-i-1];
    }

    printf("Diagonal Sum: %d",sum);
}