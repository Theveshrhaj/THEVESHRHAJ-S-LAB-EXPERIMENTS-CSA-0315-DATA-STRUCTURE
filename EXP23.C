#include <stdio.h>
#define INF 9999
#define MAX 50
int main(){
    int n, cost[MAX][MAX], dist[MAX], visited[MAX]={0}, count, mindist, nextnode, src;
    printf("Enter number of vertices: "); scanf("%d",&n);
    printf("Enter cost adjacency matrix (9999 for no edge):\n");
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) scanf("%d",&cost[i][j]);
    printf("Enter source vertex: "); scanf("%d",&src);
    for(int i=0;i<n;i++){ dist[i]=cost[src][i]; visited[i]=0; }
    dist[src]=0; visited[src]=1; count=1;
    while(count<n-1){
        mindist=INF;
        for(int i=0;i<n;i++) if(dist[i]<mindist && !visited[i]){ mindist=dist[i]; nextnode=i; }
        visited[nextnode]=1;
        for(int i=0;i<n;i++) if(!visited[i] && mindist+cost[nextnode][i]<dist[i]) dist[i]=mindist+cost[nextnode][i];
        count++;
    }
    printf("Shortest distances:\n");
    for(int i=0;i<n;i++) printf("%d -> %d = %d\n",src,i,dist[i]);
}