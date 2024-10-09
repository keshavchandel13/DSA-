#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *next;
    struct node *prev;
}*head=NULL,*temp=NULL;

void createnode(int x);

int main()
{
    int x;
    printf("Enter the number of nodes you want to create\n");
    scanf("%d",&x);
    createnode(x);
    return 0;
}

void createnode(int x)
{
    if(x < 1) {
        printf("Invalid input for number of nodes.\n");
        return;
    }

    head=(struct node*)malloc(sizeof(struct node));
    if(head == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }
    printf("Enter the data of the 1st node\n");
    scanf("%d",&head->data);
    head->next = NULL;
    temp = head;

    for(int i = 2; i <= x; i++)
    {
        struct node *newnode = (struct node*)malloc(sizeof(struct node));
        if(newnode == NULL) {
            printf("Memory allocation failed.\n");
            return;
        }
        printf("Enter the data of the %d node\n",i);
        scanf("%d",&newnode->data);
        newnode->next = NULL;
        temp->next = newnode;
        temp = temp->next;
    }
    temp->next = head;
    
    //traversing the circular linked list
    temp = head;
    do
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    } while(temp != head);
}
