#include <stdio.h>
int main(){
    int r,c;
    printf("Enter rows and columns: ");
    scanf("%d %d",&r,&c);
    int a[100][100], b[100][100], sum[100][100];

    printf("Enter first matrix:\n");
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    printf("Enter second matrix:\n");
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&b[i][j]);

    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            sum[i][j]=a[i][j]+b[i][j];

    printf("Result matrix:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
            printf("%d ",sum[i][j]);
        printf("\n");
    }
}