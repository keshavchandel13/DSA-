#include<stdio.h>
void display();
void push();
void queue();
# define max 5
int top1=-1;
int top2=-1;
int stack1[max];
int stack2[max];
int main()
{
    int choice,ele;
    do{
        printf("Enter 1 to push element in the stack\n enter 2 to implement queue\nEnter 3 to display\n");
        scanf("%d",&choice);
          switch(choice)
         {
             case 1:
            {
                 printf("Enter the element in the stack\n");
                   scanf("%d",&ele);
                   push(ele);
                   break;
            }
              case 2:
            {
                queue();
                break;

            }
            case 3:
            {
                display();
            }
        }
    }while(choice!=4);
}
void  push(int ele)
{
if(top1==max-1)
{
    printf("Stack is full\n");
}
else{
    top1++;
    stack1[top1]=ele;
}

}

void queue()
{
    if(top1==-1)
    {
        printf("Stack is empty\n");

    }
    while(top1!=-1)
    {
        top2++;
        stack2[top2]=stack1[top1];
        top1--;
        
    }



}
void display()
{
    while(top2!=-1)

    {
        printf("%d\t",stack2[top2]);
        top2--;
    }
}