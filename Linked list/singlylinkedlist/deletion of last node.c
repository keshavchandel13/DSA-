#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
void fun (int x)
{
  
     struct node *head;
      head=(struct node*)malloc(sizeof(struct node));
       
        printf("Enter the data of the 1 node\n");
        scanf("%d",&head->data);
        head->next=NULL;
          struct node *temp=head;
    for(int i=2;i<=x;i++)
    {
        struct node *newnode=(struct node*)malloc(sizeof(struct node));
        
        printf("Enter the data of the %d node\n",i);
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        temp->next=newnode;
        temp=temp->next;

    }
    struct node*temp1=head;
     printf("Data in linked list\n");
    while(temp1 != NULL)
    {
       
        printf("%d\t",temp1->data);
        temp1=temp1->next;
    }
    printf("\nDeleting last node\n");
    temp=head;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
       free(temp->next->next);
    temp->next=NULL;
    printf("Data after the deletion\n");
     struct node*temp1=head;
    
    while(temp1 != NULL)
    {
       
        printf("%d\t",temp1->data);
        temp1=temp1->next;
    }

}
int main()
{
    int x;
    printf("Enter the number of the linked list you want to create\n");
    scanf("%d",&x);
    fun(x);
   
}