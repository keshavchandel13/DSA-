#include<stdio.h>
#define max 5
int front=-1,rear=-1;
int queue[max];
void enqueue();
int dequeue();
void display();
int main()
{
    int choice;
    do{
        printf("******This is Main Program For Queue*****\nEnter 1 for enqueue\nEnter 2 for dequeue\nEnter 3 to display element\nEnter 4 to exit.\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                int val;
                printf("Enter the element in the queue\n");
                scanf("%d",&val);
                enqueue(val);
                break;
            }
            case 2:
            {
                int val=dequeue();
                printf("Dequeue val is %d\n",val);
                break;

            }
            case 3:
            {
                display();
                break;
            }
        }

    }while(choice!=4);
}
void enqueue(int val)
{
   if(rear==max-1)
   {
    printf("Queue is full\n");
   } 
   else 
   {
    if (front==-1 && rear==-1){
    front=0,rear=0;
    queue[front]=val;

   }
   else{
    rear++;
    queue[rear]=val;
   }
   }
}
int dequeue()
{
    if(front==rear)
    {
        printf("Queue is empty\n");
    }
    else{
       int val =queue[front];
       front++;
       if(front > rear) {
            
            front = -1;
            rear = -1;
        }
       return val; 
    }
}
void display(){
    int temp=front;
    while (temp<=rear)
    {
        printf("%d\t",queue[temp]);
        temp=temp+1;

    }
    printf("\n");
}

