#include <stdio.h>
void swap(int *a,int *b){int t=*a;*a=*b;*b=t;}
int partition(int arr[],int l,int h){
    int pivot=arr[h],i=l-1;
    for(int j=l;j<h;j++) if(arr[j]<=pivot){ i++; swap(&arr[i],&arr[j]); }
    swap(&arr[i+1],&arr[h]); return i+1;
}
void quicksort(int arr[],int l,int h){ if(l<h){ int pi=partition(arr,l,h); quicksort(arr,l,pi-1); quicksort(arr,pi+1,h);} }
int main(){
    int n; printf("Enter size: "); scanf("%d",&n);
    int arr[n]; printf("Enter %d elements: ",n);
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    quicksort(arr,0,n-1);
    printf("Sorted: "); for(int i=0;i<n;i++) printf("%d ",arr[i]);
}