#include <stdio.h>
int visited[100];
void dfs(int graph[100][100], int n, int v){
    printf("%d ",v);
    visited[v]=1;
    for(int i=0;i<n;i++){
        if(graph[v][i] && !visited[i])
            dfs(graph,n,i);
    }
}
int main(){
    int n;
    printf("Enter number of vertices: ");
    scanf("%d",&n);
    int graph[100][100];
    printf("Enter adjacency matrix:\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&graph[i][j]);
    dfs(graph,n,0);
}