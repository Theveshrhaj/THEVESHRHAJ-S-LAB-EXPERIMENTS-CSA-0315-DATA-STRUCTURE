#include <stdio.h>
int main(){
    int n; 
    printf("Enter number of terms: ");
    scanf("%d",&n); 
    long long a=0,b=1; 
    for(int i=0;i<n;i++){ 
        printf("%lld ",a); 
        long long c=a+b; a=b; b=c; 
    }
    return 0;
}