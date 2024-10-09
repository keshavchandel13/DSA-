#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *prev;
struct node *next;
}*head,*temp;
void create();
void insertnode();
void deletenode();
int main()
{
    int x,insert;
    printf("Enter the number of the nodes you want to create\n");
    scanf("%d",&x);
    create(x);
    printf("\nEnter 0 to exit 1 for insert a new node 2 to delete any node\n");
    scanf("%d",&insert);
    if(insert==1)
    {
        insertnode();
    }
   // else if(insert==2)
   // {
   //     deletenode();
   // }
    else{
        printf("byeeeee\n");
    }
}
void create (int x)
{
head=(struct node *)malloc(sizeof(struct node));
printf("Enter the data of the first node\n");
scanf("%d",&head->data);
head->prev=NULL;
head->next=NULL;
int i;
temp=head;
for(i=2;i<=x;i++)
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data of the %d node\n",i);
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    temp->next=newnode;
    newnode->prev=temp;
    temp=temp->next;

}
//traversing the list
temp=head;
while(temp!=NULL)
{
    printf("%d\t",temp->data);
    temp=temp->next;
}
}
void insertnode( )
{
    int select;
    printf("Enter 1 for insertion at beginning\n 2 for insertion at end\n 3 for insertion after any node\n 4 for insertion before any node\n  ");
    scanf("%d",&select);
     struct node *newnode=(struct node *)malloc(sizeof(struct node));
    switch (select)
    {
       
        case 1:
        
        newnode->prev=NULL;
        newnode->next=head;
       // head->prev=newnode;
        head=newnode;
        temp=head;
        printf("Enter the data of the newnode\n");
        scanf("%d",&head->data);
        while(temp!=NULL)
        {
            printf("%d\t",temp->data);
            temp=temp->next;
        }
        break;
        
        case 2:
        
            temp=head;
            while(temp!=NULL)
            {
                temp=temp->next;
            }
            newnode->prev=temp;
            newnode->next=NULL;
             temp=head;
            printf("Enter the data of the newnode\n");
            scanf("%d",&newnode->data);
           while(temp!=NULL)
          {
            printf("%d\t",temp->data);
            temp=temp->next;
          }
        break;

        case 3:
        int search;
        printf("Enter the number after you want to add the node\n");
        scanf("%d",&search);
        temp=head;
        while(temp->data!=search)
        {
            temp=temp->next;
        }
        newnode->next=temp->next;
        newnode->prev=temp;
        temp->next=newnode;
          temp=head;
            printf("Enter the data of the newnode\n");
            scanf("%d",&newnode->data);
           while(temp!=NULL)
          {
            printf("%d\t",temp->data);
            temp=temp->next;
          }
          break;

          case 4:
          int find;
        printf("Enter the number before you want to add the node\n");
        scanf("%d",&find);
        temp=head;
        while(temp->next->data!=find)
        {
            temp=temp->next;
        }
       
   
        newnode->next=temp->next;
        newnode->prev=temp;
        temp->next=newnode;
         temp=head;
            printf("Enter the data of the newnode\n");
            scanf("%d",&newnode->data);
           while(temp!=NULL)
          {
            printf("%d\t",temp->data);
            temp=temp->next;
          }
          break;


         

    }
}
