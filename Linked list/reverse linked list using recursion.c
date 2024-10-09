#include<stdio.h>
#include<stdlib.h>
void reverse_list();
struct node
{
int data;
struct node *next;
struct node *prev;
}*head;
int main()
{
    printf("Enter the number of the nodes you want  to create\n");
    int num;
    scanf("%d",&num);
    head=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data in the node\n");
    scanf("%d",&head->data);
    head->next=NULL;
    head->prev=NULL;
    int i;
    struct node *temp=head;
    for(i=2;i<=num;i++)
    {
        struct node *newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the data in the %d node",i);
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        newnode->prev=temp;
        temp->next=newnode;
        temp=temp->next;
    }
    temp=head;
    printf("Data before reversing\n");
    while(temp->next!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;

    }
    printf("\n");
    printf("DAta afeter reversing\n");
  

    // while(temp!=NULL)
    // {
    //     printf("%d\t",temp->data);
    //     temp=temp->prev;
    // }
    reverse_list(&temp);

}
void reverse_list(struct node *temp)
{
   
    if(temp->prev==NULL)
    {
        return ;
    }
    printf("%d\t",temp->data);
    return temp->prev;
}