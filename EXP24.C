#include <stdio.h>
#define INF 9999
#define MAX 50
int main(){
    int n, cost[MAX][MAX], visited[MAX]={0}, ne=1, a,b,u,v,min;
    printf("Enter number of vertices: "); scanf("%d",&n);
    printf("Enter cost adjacency matrix (9999 for no edge):\n");
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) scanf("%d",&cost[i][j]);
    visited[0]=1;
    int mincost=0;
    printf("Edges in MST:\n");
    while(ne<n){
        min=INF;
        for(int i=0;i<n;i++) if(visited[i])
            for(int j=0;j<n;j++) if(!visited[j] && cost[i][j]<min){ min=cost[i][j]; u=i; v=j; }
        printf("%d -> %d = %d\n",u,v,min);
        mincost+=min; visited[v]=1; ne++;
    }
    printf("Minimum cost = %d\n",mincost);
}