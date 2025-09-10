#include <stdio.h>
#define SIZE 10
int hash[SIZE];
void insert(int key){ int i=key%SIZE; while(hash[i]!=-1) i=(i+1)%SIZE; hash[i]=key; }
void display(){ for(int i=0;i<SIZE;i++) printf("%d:%d\n",i,hash[i]); }
int main(){
    for(int i=0;i<SIZE;i++) hash[i]=-1;
    int n,val; printf("Enter number of keys: "); scanf("%d",&n);
    for(int i=0;i<n;i++){ printf("Enter key: "); scanf("%d",&val); insert(val); }
    display();
}