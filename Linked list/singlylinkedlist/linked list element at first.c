#include<stdio.h>
#include<stdlib.h>
struct node 
{
int data;
struct node *next;
};
 void create(int n)
 {
    struct node *head=(struct node *)malloc(sizeof(struct node));
    printf("Enter the data of the first node\n");
    scanf("%d",&head->data);
    head->next=NULL;
    struct node *temp=head;
    for(int i=2;i<=n;i++)
    {
        struct node *newnode=(struct node *)malloc(sizeof(struct node));
        printf("Enter the data of the %d node\n",i);
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        temp->next=newnode;
        temp=temp->next;

    }
    //adding new node to the first position
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter the data of the newnode\n");
    scanf("%d",&newnode->data);

    newnode->next=head;
    head=newnode;
      struct node*temp1=head;
     printf("Data in linked list\n");
    while(temp1 != NULL)
    {
       
        printf("%d\t",temp1->data);
        temp1=temp1->next;
    }

 }
int main()
{
    int n;
    printf("Enter the number of the nodes\n");
    scanf("%d",&n);
    create(n);

}