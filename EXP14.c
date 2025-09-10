#include <stdio.h>
#include <stdlib.h>
struct Node{ int data; struct Node* left; struct Node* right; };
struct Node* create(int val){ struct Node* n=malloc(sizeof(struct Node)); n->data=val; n->left=n->right=NULL; return n; }
void inorder(struct Node* r){ if(r){ inorder(r->left); printf("%d ",r->data); inorder(r->right);} }
void preorder(struct Node* r){ if(r){ printf("%d ",r->data); preorder(r->left); preorder(r->right);} }
void postorder(struct Node* r){ if(r){ postorder(r->left); postorder(r->right); printf("%d ",r->data);} }
int main(){
    int n,val; printf("Enter number of nodes: "); scanf("%d",&n);
    if(n<=0) return 0;
    struct Node* root=NULL,*q[100]; int front=0,rear=0;
    printf("Enter root value: "); scanf("%d",&val);
    root=create(val); q[rear++]=root;
    for(int i=1;i<n;i++){
        struct Node* parent=q[front++];
        printf("Enter left child of %d (-1 for none): ",parent->data); scanf("%d",&val);
        if(val!=-1){ parent->left=create(val); q[rear++]=parent->left; }
        printf("Enter right child of %d (-1 for none): ",parent->data); scanf("%d",&val);
        if(val!=-1){ parent->right=create(val); q[rear++]=parent->right; }
    }
    printf("Inorder: "); inorder(root);
    printf("\nPreorder: "); preorder(root);
    printf("\nPostorder: "); postorder(root);
}