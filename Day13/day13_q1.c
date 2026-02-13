#include <stdio.h>
int main(){
    int n;
    printf("Enter size of square matrix: ");
    scanf("%d",&n);
    int a[100][100];

    printf("Enter matrix:\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);

    printf("Boundary elements: ");
    for(int i=0;i<n;i++) printf("%d ",a[0][i]);
    for(int i=1;i<n;i++) printf("%d ",a[i][n-1]);
    for(int i=n-2;i>=0;i--) printf("%d ",a[n-1][i]);
    for(int i=n-2;i>0;i--) printf("%d ",a[i][0]);
}