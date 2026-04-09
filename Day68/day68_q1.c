#include <stdio.h>

int main(){
    int n;
    printf("Enter number of vertices: ");
    scanf("%d",&n);

    int graph[n][n], indegree[n];

    printf("Enter adjacency matrix:\n");
    for(int i=0;i<n;i++){
        indegree[i]=0;
        for(int j=0;j<n;j++){
            scanf("%d",&graph[i][j]);
            if(graph[i][j]) indegree[j]++;
        }
    }

    int queue[100], front=0,rear=0;

    for(int i=0;i<n;i++)
        if(indegree[i]==0)
            queue[rear++]=i;

    printf("Topo Sort (Kahn): ");
    while(front<rear){
        int u=queue[front++];
        printf("%d ",u);

        for(int v=0;v<n;v++){
            if(graph[u][v]){
                indegree[v]--;
                if(indegree[v]==0)
                    queue[rear++]=v;
            }
        }
    }
}