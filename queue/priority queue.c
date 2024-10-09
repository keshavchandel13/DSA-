#include<stdio.h>
# define size 5
struct priority_queue
{
    int element;
    int priority;
}pq[size];
int front=-1,rear=-1;
void enqueue(int ele,int pri);
void display();
int gethigh();
int dequeue();
int main()
{
    int choice,ele,pri;
    do
    {
        printf("******Welcome to Priority Queue program******\nEntre 1 to Enqueue\nEnter 2 to display the elements in the queue\nEnter 3 to gethigh\nEnter 4 to dequeue\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                printf("Enter The element in the priority queue\n");
                scanf("%d",&ele);
                printf("Enter the priority of the element\n");
                scanf("%d",&pri);
                enqueue(ele,pri);
                break;
            }
            case 2:
            {
                display();
                break;
            }
            case 3:
            {
                int high_pri=gethigh();
                printf("Highest priority is %d\n",high_pri);
                break;
            }
            case 4:
            {
               int  deleted= dequeue();
               printf("Dequeued element is %d",deleted);
            }

        }

    }while(choice!=4);

}
int full()
{
    if(rear==size-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}
void enqueue(int ele,int pri)
{
    if(full())
    {
        printf("Priority queue is full\n");
        return;
    }
    else
    {
        rear++;
        pq[rear].element=ele;
        pq[rear].priority=pri;
         

    }

}
void display()
{
    for(int i=0;i<=rear;i++)
    {
        printf("Element=%d and priority=%d,\t",pq[i].element,pq[i].priority);
    }
}
int gethigh()
{
    int p=-1;
    for(int i=0;i<=rear;i++)
    {
        if(pq[i].priority>p)
        {
            p=pq[i].priority;
        }
    }
    return p;
}
int dequeue()
{
    int i,j;
    int p=gethigh();
    int ele=-1;
      if (rear == -1) 
    {
        printf("Priority queue is empty\n ");
        return -1; 
    }
    for(i=0;i<=rear;i++)
    {
        if(pq[i].priority==p)
        {
              ele=pq[i].element;
        break;     
        }
    }
    for(j=i;j<rear;j++)
    {
        pq[j].element=pq[j+1].element;
        pq[j].priority=pq[j+1].priority;
    }
    rear=rear-1;
    return ele;

    

}