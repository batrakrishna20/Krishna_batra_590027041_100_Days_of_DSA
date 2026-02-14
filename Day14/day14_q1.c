#include <stdio.h>
int main(){
    int n;
    printf("Enter size: ");
    scanf("%d",&n);
    int a[100][100], flag=1;

    printf("Enter matrix:\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if((i==j && a[i][j]!=1)||(i!=j && a[i][j]!=0)) flag=0;

    if(flag) printf("Identity Matrix");
    else printf("Not Identity Matrix");
}