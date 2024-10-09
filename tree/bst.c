#include<stdio.h>
#include<stdlib.h>
struct bstnode
{
    int data;
    struct bstnode *left;
    struct bstnode *right;
}*root=NULL;
struct bstnode *getnode(int data);
struct bstnode *insert(struct bstnode *root,int data)
{
    if(root==NULL)
    {
        root=getnode(data);
    }
    else if(data<root->data)
    {
        root->left=insert(root->left,data);
    }
    else if(data>root->data)
    {
        root->right=insert(root->right,data);
    }
    return root;


}


struct bstnode *getnode(int data)
{
    struct bstnode *t=(struct bstnode*)malloc(sizeof(struct bstnode));
    t->data=data;
    t->left=NULL;
    t->right=NULL;
    return t;
}

void inorder(struct bstnode *temp)
{
    if(temp!=NULL)
    {
        inorder(temp->left);
        printf("%d\t",temp->data);
        inorder(temp->right);
    }
}
void preorder(struct bstnode *temp)
{
    if(temp!=NULL)
    {
        printf("%d\t",temp->data);
        preorder(temp->left);
        preorder(temp->right);
    }
}
void postorder(struct bstnode *temp)
{
    if(temp!=NULL)
    {
        postorder(temp->left);
        postorder(temp->right);
        printf("%d\t",temp->data);
    }
}

//finding number of nodes in binary tree
int numberOfNodes(struct bstnode *root)
{
if(root==NULL)
{
    return 0;
}
else
{
    return(1+numberOfNodes(root->left)+numberOfNodes(root->right));
}
}

int leaf(struct bstnode *root)
{
    if(root==NULL)
    {
        return 0;
    }
    else if(root->left==NULL && root->right==NULL)
    {
        return 1;
    }
    else{
        return(leaf(root->left)+leaf(root->right));
    }
}

int fullNode(struct bstnode* root)
{
if(root==NULL)
{
    return 0;
}
else{
    return(fullNode(root->left)+fullNode(root->right)+((root->left && root->right)?1:0));
}
}

//min value in the subtree
struct bstnode*minvalue(struct bstnode *root)
{
    while(root && root->left!=NULL)
    {
        root=root->left;
    }
    return root;
}

//height of the  binary tree
 int height(struct bstnode *root)
 {
    if(root==0)
    {
        return 0;
    }
    else{
       int l=height(root->left);
        int r=height(root->right);
        return 1+(l>=r? l:r);

    }
 }

 //deletion from bst
 struct bstnode* deletenode(struct bstnode *root,int key)
 {
    if(root==NULL)
    return 0;
   if(key<root->data){
   root->left=deletenode(root->left,key);
   }
   else if(key>root->data){
    root->right=deletenode(root->right,key);
   }
   else{
    if(root->left==NULL){
        struct bstnode *temp=root->right;
        free(root);
        return temp;
    }
    else if(root->right==NULL){
        struct bstnode *temp=root->left;
        free(root);
        return temp;
    }

       // If node has two children
   struct bstnode *temp=minvalue(root->right);
   root->data=temp->data;
   root->right=deletenode(root->right,temp->data);
   }
   return root;


 }
int main()
{
    // Binary search TRee formation
    root=insert(root,10);
    root=insert(root,3);
    root=insert(root,23);
    root=insert(root,90);
    root=insert(root,5);
    root=insert(root,11);

    //Inorder of the binary search tree is in accending order
    printf("Inorder Of the BST is\n");
    inorder(root);
    printf("\n");
    //Preorder of bst
    printf("Preorder of the BST is\n");
    preorder(root);
    printf("\n");
    //Postorder of bst
    printf("Postorder of the BST is\n");
    postorder(root);
    printf("\n");

    printf("Number of the nodes in the binary tree %d\n",numberOfNodes(root));
    printf("Number of the leaf in the binary tree %d\n",leaf(root));
    printf("Number of the full node in the binary tree %d\n",fullNode(root));
    printf("height of  the binary tree %d\n",height(root));

    // deletion from bst
    root=deletenode(root,11);
    printf("Inorder Of the BST after the deletion is\n");
    inorder(root);
    printf("\n");


}