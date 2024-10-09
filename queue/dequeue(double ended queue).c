#include<stdio.h>
void enqueue_front();
void enqueue_rear();
int dequeue_front();
int dequeue_rear();
void display();
#define max 5
int front=-1,rear=-1;
int dequeue[max];
int main()
{
    int choice;
    do{
         printf("******This is Main Program For DeQueue*****\nEnter 1 for enqueue by front\nEnter 2 for enequeue by rear\nEnter 3 to dequeue by front\nEnter 4 to dequeue by rear.\n Enter 5 to display dequeue\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                int val;
                printf("Enter the element in the  dequeue\n");
                scanf("%d",&val);
                enqueue_front(val);
                break;
            }
            case 2:
            {
                 int val;
                printf("Enter the element in the  dequeue\n");
                scanf("%d",&val);
                enqueue_rear(val);
                break;

            }
            case 3:
            {
                int val=dequeue_front();
                printf("Deleted element from the dequeue is %d\n",val);
                break;

            }
            case 4:
            {
                int val=dequeue_rear();
                printf("Deleted element from the dequeue is %d\n",val);
                break;

            }
            case 5:
            {
                display();
                break;
            }
        }
    }while(choice!=6);
}
void enqueue_front(int value)
{
    if((rear==max-1 && front==0)|| (front==rear+1))
    {
        printf("Dequeue is full\n");
    }
    else if(front==-1 && rear==-1)
    {
        front++,rear++;
        dequeue[front]=value;

    }
    else if (front==0)
    {
        front=max-1;
        dequeue[front]=value;
    }
    else
    {
        front--;
        dequeue[front]=value;
    }
}

void enqueue_rear(int val)
{
    if((front==0 && rear==max-1) || (front==rear+1))
    {
        printf("Dequeue is full\n");
    }
     else if(front==-1 && rear==-1)
    {
        front++,rear++;
        dequeue[rear]=val;
    }
    else if(rear==max-1)
    {
        rear=0;
        dequeue[rear]=val;
    }
    else
    {
        rear++;
        dequeue[rear]=val;
    }
}

int dequeue_front()
{
    int val;
    if(front==-1 && rear==-1)
    {
        printf("Dequeue is empty\n");
    }
    else if (front==rear)
    {
        val= dequeue[front];
        front=rear=-1;
        return val;
    }
    else if(front==max-1)
    {
     val=dequeue[front];
     front--;
     return val;   
    }
    else{
        val=dequeue[front];
        front++;
        return val;
    }
}
int dequeue_rear()
{
    int val;
    if(front==-1 && rear==-1)
    {
        printf("Dequeue is empty\n");
    }
    else if(front==rear) {
        val= dequeue[rear];
        rear--;
        return val;

    }
 
    else{
        val=dequeue[rear];
        rear--;
        return val;
    }

}
void display()
{
     int temp=front;
    while (temp<=rear)
    {
        printf("%d\t",dequeue[temp]);
        temp=temp+1;

    }
    printf("\n");
}