#include <stdio.h>
#define MAX 50
int adj[MAX][MAX], visited[MAX], n;
void dfs(int v){
    visited[v]=1; printf("%d ",v);
    for(int i=0;i<n;i++) if(adj[v][i]&&!visited[i]) dfs(i);
}
int main(){
    int start;
    printf("Enter number of vertices: "); scanf("%d",&n);
    printf("Enter adjacency matrix:\n");
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) scanf("%d",&adj[i][j]);
    printf("Enter starting vertex: "); scanf("%d",&start);
    for(int i=0;i<n;i++) visited[i]=0;
    printf("DFS: "); dfs(start);
}