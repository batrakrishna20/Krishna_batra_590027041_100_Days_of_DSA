#include <stdio.h>
int visited[100];

int dfs(int graph[100][100], int n, int v, int parent){
    visited[v]=1;
    for(int i=0;i<n;i++){
        if(graph[v][i]){
            if(!visited[i]){
                if(dfs(graph,n,i,v)) return 1;
            }
            else if(i!=parent) return 1;
        }
    }
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
    if(dfs(graph,n,0,-1)) printf("Cycle detected");
    else printf("No cycle");
}