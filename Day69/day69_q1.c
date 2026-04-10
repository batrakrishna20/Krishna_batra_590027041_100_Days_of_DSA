#include <stdio.h>
#include <limits.h>

int minDist(int dist[], int vis[], int n){
    int min=INT_MAX, idx;
    for(int i=0;i<n;i++)
        if(!vis[i] && dist[i]<=min){
            min=dist[i]; idx=i;
        }
    return idx;
}

int main(){
    int n;
    printf("Enter vertices: ");
    scanf("%d",&n);

    int graph[n][n];
    printf("Enter adjacency matrix:\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&graph[i][j]);

    int dist[n], vis[n];
    for(int i=0;i<n;i++){
        dist[i]=INT_MAX;
        vis[i]=0;
    }

    dist[0]=0;

    for(int c=0;c<n-1;c++){
        int u=minDist(dist,vis,n);
        vis[u]=1;

        for(int v=0;v<n;v++)
            if(!vis[v] && graph[u][v] && dist[u]+graph[u][v]<dist[v])
                dist[v]=dist[u]+graph[u][v];
    }

    printf("Distances:\n");
    for(int i=0;i<n;i++)
        printf("%d ",dist[i]);
}