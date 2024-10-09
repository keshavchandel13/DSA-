#include<stdio.h>
struct node *node{
    int data;
    struct node* left;
    struct node* right;
}node;

node* newnode(int val){
    node* temp=(node*)malloc(sizeof(node));
    temp->data=val;
    temp->left=NULL:
    temp->right=NULL;
    return temp;
}

node* insert(node* root,int data)
{
    if(root==NULL)
    {
        root=newnode(data);
    }


    node* queue[100];
    int front=0;rear=0;
    queue[rear++]=root;
    while(rear!=front)
    {
          Node* temp = queue[front++];
        // Insert node as the left child of the parent node
        if (temp->left == NULL) {
            temp->left = newNode(data);
            break;e
    }
}
