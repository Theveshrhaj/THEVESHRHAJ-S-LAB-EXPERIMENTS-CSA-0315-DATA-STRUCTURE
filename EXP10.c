#include <stdio.h>
#include <stdlib.h>
struct Node{ int data; struct Node* next; }*head=NULL;
void insert(int val){
    struct Node* n=malloc(sizeof(struct Node));
    n->data=val; n->next=head; head=n;
}
void delete(){ if(head){ struct Node* t=head; head=head->next; free(t);} }
void display(){ struct Node* t=head; while(t){ printf("%d ",t->data); t=t->next; } }
int main(){
    int ch,val;
    do{
        printf("\n1.Insert 2.Delete 3.Display 4.Exit: "); scanf("%d",&ch);
        if(ch==1){ printf("Enter value: "); scanf("%d",&val); insert(val); }
        else if(ch==2) delete();
        else if(ch==3) display();
    }while(ch!=4);
}