#include <stdio.h>
#include <math.h>
#include<malloc.h> 

struct node {
    
    int data;
    struct node *left;
    struct node *right;
  
};

struct node* createnode(int data)
{
    struct node* n;
    n=(struct node*)malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}
void preOrder( struct node *root) 
{
    if(root!=NULL)
    {
        printf("%d ",root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}



int getHeight(struct node* root) {    
    if(root==NULL){
        return 0;
    }
    int Rh=getHeight(root->right);
    int Lh=getHeight(root->left);
    if(Rh>Lh){
        return Rh+1;
        }
    return Lh+1;
    }



void insert( struct node* root, int key ) {
    struct node* prev=NULL;
	while(root!=NULL){
        prev=root;
        if(key==root->data){
            return ;}
        else if(key>=root->data){
            root=root->right;}
        else{
            root=root->left;
        }}
        struct node* new=createnode(key);
  
    if(key>=prev->data){
        prev->right=new;
    }	
    else{
        prev->left=new;
    }
}



int main()
    {
     struct node* p=createnode(1);
     struct node* p1=createnode(2);
     struct node* p2=createnode(5);
     struct node* p3=createnode(3);
     struct node* p4=createnode(6);
     struct node* p5=createnode(4);
     
     p->left=NULL;
     p->right=p1;
     p1->left=NULL;
     p1->right=p2;
     p2->left=p3;
     p2->right=p4;
     p3->left=p5;
     
     //preOrder(p);
     getHeight(p);
     insert(p,90);
     printf("%d ",p->right->right->right->right->data);
     return 0;
    }



