#include<stdio.h>
# define max 5
int front=0,rear=0;
int queue[max];
void enqueue();

int main()
{
    int choice,ele;
    do{
    printf("****************MAIN PROGRAM FOR CIRCULAR QUEUE**********\nEnter 1 to enqueue in the queue\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        {
            printf("Enter the data in the queue\n");
            scanf("%d",&ele);
            enqueue(ele);
        }
       
    }
    }while(choice!=2);

}
void enqueue(int ele)
{
    
    if((rear+1)%max==front)
    {
        printf("Queue is full\n");
        return;
    }
     queue[rear] = ele;
    rear = (rear + 1) % max;
   
    
}