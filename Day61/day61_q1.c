#include <stdio.h>
int main(){
    int n;
    printf("Enter number of vertices: ");
    scanf("%d",&n);
    int graph[n][n];
    printf("Enter adjacency matrix:\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&graph[i][j]);
    printf("Adjacency Matrix:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            printf("%d ",graph[i][j]);
        printf("\n");
    }
}