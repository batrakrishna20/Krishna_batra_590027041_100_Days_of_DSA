#include <stdio.h>
int visited[100], rec[100];

int dfs(int graph[100][100], int n, int v){
    visited[v]=1;
    rec[v]=1;

    for(int i=0;i<n;i++){
        if(graph[v][i]){
            if(!visited[i] && dfs(graph,n,i)) return 1;
            else if(rec[i]) return 1;
        }
    }
    rec[v]=0;
    return 0;
}

int main(){
    int n;
    printf("Enter vertices: ");
    scanf("%d",&n);
    int graph[100][100];
    printf("Enter adjacency matrix:\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&graph[i][j]);
    if(dfs(graph,n,0)) printf("Cycle in directed graph");
    else printf("No cycle");
}