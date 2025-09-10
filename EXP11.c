#include <stdio.h>
#define MAX 100
int stack[MAX], top=-1, n;
void push(int val){ if(top==n-1) printf("Overflow\n"); else stack[++top]=val; }
void pop(){ if(top==-1) printf("Underflow\n"); else printf("Popped %d\n",stack[top--]); }
void peek(){ if(top==-1) printf("Empty\n"); else printf("Top=%d\n",stack[top]); }
void display(){ for(int i=top;i>=0;i--) printf("%d ",stack[i]); }
int main(){
    printf("Enter stack size: "); scanf("%d",&n);
    int ch,val;
    do{
        printf("\n1.Push 2.Pop 3.Peek 4.Display 5.Exit: "); scanf("%d",&ch);
        if(ch==1){ printf("Enter value: "); scanf("%d",&val); push(val); }
        else if(ch==2) pop();
        else if(ch==3) peek();
        else if(ch==4) display();
    }while(ch!=5);
}