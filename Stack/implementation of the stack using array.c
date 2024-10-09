#include<stdio.h>
#include<stdlib.h>
void push();
int  pop();
 void display();

int stack[5],top=-1,choice;
int main()
{
    
    do{
    printf("Enter 1 for push\n2 for pop\n3 to display\n");
    scanf("%d",&choice);
 
    switch(choice)
   
    {
        case 1:
        {
        push();
        break;
        }

        case 2:
        {
        int ele=pop();
        printf("Poped element is %d\n",ele);
        break;
        }
        
        case 3:
        {
             display();
        }
    }
        }while(choice!=4);
        return 0;
}

void push()
{
    int i;
   
     int data;
     if(top==4)
     {
        printf("Stack is overflow\n");
     }
    
     else
     {
     
        
             printf("Enter the data in the stack\n");
           scanf("%d",&data);
           top++;
           stack[top]=data;
         
    }
    
}
void display()
{
    int i;
    printf("Data in the stack is");
    if(top>=0)
    {
        
        for(i=top;i>=0;i--)
        {
            printf("%d\t",stack[i]);
        }
        printf("\n");
    }
    else
    {
        printf("Stack is empty\n");
    }
}

int  pop()
{
     int element ;
    if(top==-1)
    {
        printf("stack is underflow\n");
        return -1;
    }
   else{
    element=stack[top];
    top=top-1;
    return element;
   }
  


}