#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head;
void push();
int pop();
void display();
int main()
{
        int choice;
    do{
     
    printf("******This Is Main Program Of Stack******\n->Enter 1 to push element in the stack\n->Enter 2 to pop the element from the stack\n->Enter 3 to display the stack\n->Enter 4 to exit\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        {
            int ele;
            printf("Enter the element you want to enter\n");
            scanf("%d",&ele);
            push(ele);
            break;
        }
        case 2:
        {
            int val=pop();
            printf("The poped element is %d\n",val);
            break;

        }
        case 3:
        {
            display();
            break;
        }
        case 4:
        {
         break;

        }

    }


    }while(choice!=4);
}
void push(int val)
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->next=head;
    head=newnode;
    newnode->data=val;
}
int  pop()
{
    if(head==NULL)
    {
        printf("Stack is empty\n");
    }
    else{
        int val=head->data;
        struct node *p=head;
        head=head->next;
        free(p);
        return val;
    }
}
void display()
{
    struct node *temp=head;
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
