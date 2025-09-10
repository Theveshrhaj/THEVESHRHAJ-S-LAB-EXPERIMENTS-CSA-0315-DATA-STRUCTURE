#include <stdio.h>
long long fact_iter(int n){ long long f=1; for(int i=2;i<=n;i++) f*=i; return f; }
int main(){ 
    int n; 
    printf("Enter number: ");
    scanf("%d",&n);
    printf("Factorial = %lld\n",fact_iter(n)); 
}