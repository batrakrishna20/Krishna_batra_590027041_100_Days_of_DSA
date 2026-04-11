#include <stdio.h>
#include <limits.h>

int main(){
    int n,e;
    printf("Enter vertices and edges: ");
    scanf("%d %d",&n,&e);

    int u[e],v[e],w[e];

    printf("Enter edges (u v w):\n");
    for(int i=0;i<e;i++)
        scanf("%d %d %d",&u[i],&v[i],&w[i]);

    int dist[n];
    for(int i=0;i<n;i++) dist[i]=INT_MAX;
    dist[0]=0;

    for(int i=0;i<n-1;i++){
        for(int j=0;j<e;j++){
            if(dist[u[j]]!=INT_MAX && dist[u[j]]+w[j]<dist[v[j]])
                dist[v[j]]=dist[u[j]]+w[j];
        }
    }

    printf("Distances:\n");
    for(int i=0;i<n;i++) printf("%d ",dist[i]);
}