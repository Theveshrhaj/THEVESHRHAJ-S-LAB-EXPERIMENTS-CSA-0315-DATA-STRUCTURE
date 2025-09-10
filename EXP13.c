#include <stdio.h>
#define MAX 100
int q[MAX], front=0, rear=-1, n;
void enqueue(int x){ if(rear==n-1) printf("Full\n"); else q[++rear]=x; }
void dequeue(){ if(front>rear) printf("Empty\n"); else printf("Dequeued %d\n",q[front++]); }
void display(){ for(int i=front;i<=rear;i++) printf("%d ",q[i]); }
int main(){
    printf("Enter queue size: "); scanf("%d",&n);
    int ch,val;
    do{
        printf("\n1.Enqueue 2.Dequeue 3.Display 4.Exit: "); scanf("%d",&ch);
        if(ch==1){ printf("Enter value: "); scanf("%d",&val); enqueue(val); }
        else if(ch==2) dequeue();
        else if(ch==3) display();
    }while(ch!=4);
}