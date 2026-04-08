#include <stdio.h>

int graph[100][100], visited[100], stack[100];
int top=-1;

void dfs(int n,int v){
    visited[v]=1;
    for(int i=0;i<n;i++){
        if(graph[v][i] && !visited[i])
            dfs(n,i);
    }
    stack[++top]=v;
}

int main(){
    int n;
    printf("Enter number of vertices: ");
    scanf("%d",&n);

    printf("Enter adjacency matrix:\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&graph[i][j]);

    for(int i=0;i<n;i++)
        if(!visited[i]) dfs(n,i);

    printf("Topo Sort (DFS): ");
    for(int i=top;i>=0;i--) printf("%d ",stack[i]);
}