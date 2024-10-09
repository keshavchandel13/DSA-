#include<stdio.h>
int dequeue();
void push();
void display();
# define max 5
int top1=-1;
int top2=-1;
int stack1[max];
int stack2[max];
int main()
{
    int choice,ele;
    do{
        printf("Enter 1 to push element in the queue\n enter 2 to delete element from queue\n3 To display the queue\n");
        scanf("%d",&choice);
          switch(choice)
         {
             case 1:
            {
                 printf("Enter the element in the queue\n");
                   scanf("%d",&ele);
                   push(ele);
                   break;
            }
              case 2:
            {
              int ele=dequeue();
              printf("Dequeue element from the queue is %d\n ",ele);
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

// dequeue
int dequeue()
{
    int ele;

    if(top1==-1)
    {
        printf("Queue is  empty\n");
    }
    else{
        while(top1!=-1)
        {
            top2++;
            stack2[top2]=stack1[top1];
            top1--;
        }
         ele=stack2[top2];
         top2--;
         while(top2!=-1)
         {
            top1++;
            stack1[top1]=stack2[top2];
            top2--;
         }
         return ele;

    }
}

//display

void display()
{
if (top1 == -1) {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue elements: ");
    for (int i = 0; i <= top1; i++) {
        printf("%d ", stack1[i]);
    }
    printf("\n");
}