#include <stdio.h>
int main(){
    int arr[100],n,ch,pos,val;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    do{
        printf("\n1.Insert 2.Delete 3.Display 4.Exit: ");
        scanf("%d",&ch);
        if(ch==1){
            printf("Enter position and value: ");
            scanf("%d%d",&pos,&val);
            for(int i=n;i>=pos;i--) arr[i]=arr[i-1];
            arr[pos-1]=val; n++;
        }
        else if(ch==2){
            printf("Enter position: "); scanf("%d",&pos);
            for(int i=pos-1;i<n-1;i++) arr[i]=arr[i+1];
            n--;
        }
        else if(ch==3){
            for(int i=0;i<n;i++) printf("%d ",arr[i]);
        }
    }while(ch!=4);
}