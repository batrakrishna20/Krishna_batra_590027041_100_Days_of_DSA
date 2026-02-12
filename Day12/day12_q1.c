#include <stdio.h>
int main(){
    int n;
    printf("Enter size of matrix: ");
    scanf("%d",&n);
    int a[100][100], flag=1;

    printf("Enter matrix:\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(a[i][j]!=a[j][i]) flag=0;

    if(flag) printf("Symmetric");
    else printf("Not Symmetric");
}