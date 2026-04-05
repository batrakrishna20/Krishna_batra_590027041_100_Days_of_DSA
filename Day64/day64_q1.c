#include <stdio.h>
int queue[100], front=0, rear=0;
int visited[100];

void bfs(int graph[100][100], int n){
    queue[rear++]=0;
    visited[0]=1;

    while(front<rear){
        int v=queue[front++];
        printf("%d ",v);

        for(int i=0;i<n;i++){
            if(graph[v][i] && !visited[i]){
                queue[rear++]=i;
                visited[i]=1;
            }
        }
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
    bfs(graph,n);
}