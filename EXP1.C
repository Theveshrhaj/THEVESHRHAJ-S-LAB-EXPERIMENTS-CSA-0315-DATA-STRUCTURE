#include <stdio.h>
int main(){
    int r1,c1,r2,c2; 
    printf("Enter rows and cols of Matrix A: ");
    scanf("%d%d",&r1,&c1);
    printf("Enter rows and cols of Matrix B: ");
    scanf("%d%d",&r2,&c2);
    if(c1!=r2){ printf("Incompatible\n"); return 0; }
    int A[50][50],B[50][50],C[50][50]={0};
    printf("Enter elements of Matrix A:\n");
    for(int i=0;i<r1;i++)for(int j=0;j<c1;j++) scanf("%d",&A[i][j]);
    printf("Enter elements of Matrix B:\n");
    for(int i=0;i<r2;i++)for(int j=0;j<c2;j++) scanf("%d",&B[i][j]);
    for(int i=0;i<r1;i++) for(int j=0;j<c2;j++) for(int k=0;k<c1;k++) C[i][j]+=A[i][k]*B[k][j];
    printf("Result Matrix:\n");
    for(int i=0;i<r1;i++){ for(int j=0;j<c2;j++) printf("%d ",C[i][j]); printf("\n"); }
    return 0;
}