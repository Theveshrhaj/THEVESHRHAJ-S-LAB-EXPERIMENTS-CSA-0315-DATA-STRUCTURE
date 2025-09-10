#include <stdio.h>
int main(){
    int n,key;
    printf("Enter size: "); scanf("%d",&n);
    int arr[n];
    printf("Enter %d sorted elements: ",n);
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    printf("Enter key: "); scanf("%d",&key);
    int l=0,r=n-1;
    while(l<=r){
        int m=(l+r)/2;
        if(arr[m]==key){ printf("Found at %d\n",m+1); return 0; }
        else if(arr[m]<key) l=m+1; else r=m-1;
    }
    printf("Not found\n");
}