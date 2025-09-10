#include <stdio.h>
#define MAX 50
struct Edge{int u,v,w;};
struct Edge edges[MAX];
int parent[MAX];
int find(int i){ return parent[i]==i?i:(parent[i]=find(parent[i])); }
void uni(int i,int j){ parent[i]=j; }
int main(){
    int n,e; 
    printf("Enter vertices and edges: "); scanf("%d%d",&n,&e);
    printf("Enter edges (u v w):\n");
    for(int i=0;i<e;i++) scanf("%d%d%d",&edges[i].u,&edges[i].v,&edges[i].w);
    for(int i=0;i<n;i++) parent[i]=i;
    // sort edges by weight
    for(int i=0;i<e-1;i++) for(int j=0;j<e-i-1;j++) if(edges[j].w>edges[j+1].w){ struct Edge t=edges[j]; edges[j]=edges[j+1]; edges[j+1]=t; }
    int count=0,mincost=0;
    printf("Edges in MST:\n");
    for(int i=0;i<e && count<n-1;i++){
        int u=find(edges[i].u), v=find(edges[i].v);
        if(u!=v){ printf("%d -> %d = %d\n",edges[i].u,edges[i].v,edges[i].w);
            mincost+=edges[i].w; uni(u,v); count++; }
    }
    printf("Minimum cost = %d\n",mincost);
}