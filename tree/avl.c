#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    int height;
    struct node *left,*right;
}*t;

int height(struct node *t)
{
    if(t==NULL)
    return 0;
    else
    return t->height;
}

int max(int a, int b)// to update the height
{
    if(a>b)
    {

    return a;    
    }
    else{
        return b;
    }


}

struct node * getnewnode(int data){
    struct node *t=(struct node *)malloc(sizeof(struct node));
    t->left=t->right=NULL;
    t->data=data;
    t->height=1;
    return t;
}

int balance_factor(struct node *t)
{
    if(t==NULL)
    {
        return 0;
    }
    else{
        return (height(t->left)-height(t->right));
    }
}

struct node *rightrotate(struct node *y)
{
    struct node *x=y->left;
    struct node *t2=x->right;
    //perform rotation
    x->right=y;
    y->left=t2;
    //update height
    x->height=max(height(x->left),height(x->right))+1;
    y->height=max(height(y->left),height(y->right))+1;
    return x;
}

struct node *leftrotate(struct node *x)
{
    struct node *y=x->right;
    struct node *t2=y->left;
    // after rotation
    y->left=x;
    x->right=t2;
     x->height=max(height(x->left),height(x->right))+1;
    y->height=max(height(y->left),height(y->right))+1;
    return y;
    
}

struct node *insert(struct node *root,int data)
{
    if(root==NULL)
    {
        return getnewnode(data);
    }
    else if(data<root->data)
    {
            root->left=insert(root->left,data);
    }
    else
    {
        root->right=insert(root->right,data);
    }
    root->height=1+max(height(root->left),height(root->right));

    //balancing factor check karne wala
    int balance=balance_factor(root);


    // left left case
    if(balance>1 && data<root->left->data){
    return (rightrotate(root));
    }

    //Right Right case
    if(balance<-1 && data>root->right->data){
    return (leftrotate(root));
    }

    //left right rotate
    if(balance>1 && data>root->left->data){
    root->left=leftrotate(root->left);
    return rightrotate(root);
    }

    //right left rotate
    if(balance<-1 && data<root->right->data){
    root->right=rightrotate(root->right);
    return leftrotate(root);
    }
    return root;

}

void inorder(struct node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}
int main()
{
    struct node *root=NULL;
    root=insert(root,80);
    root=insert(root,4);
    root=insert(root,50);
    root=insert(root,95);
    root=insert(root,52);
    root=insert(root,44);
    inorder(root);
}