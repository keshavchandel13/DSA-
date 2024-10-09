#include<stdio.h>
#include<stdlib.h>


struct node {
    int data;
    struct node *left;
    struct node *right;
};
int main()
{
struct node *t=(struct node*)malloc(sizeof(struct node));
t->data=20;
t->left=NULL;
t->right=NULL;
struct node *t2=(struct node*)malloc(sizeof(struct node));
t2->data=30;
t2->left=NULL;
t2->right=NULL;
t->left=t2;
struct node *t3=(struct node*)malloc(sizeof(struct node));
t3->data=40;
t3->left=NULL;
t3->right=NULL;
t->right=t3;
}