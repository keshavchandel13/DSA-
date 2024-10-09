#include<stdio.h>
void swap();
void selection_sort();
int main()
{
    int x[5],i;
    printf("Enter the elements in the array\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&x[i]);
    }
    printf("Data before sorting\n");
     for(i=0;i<5;i++)
   {
    printf("%d\t",x[i]);
   }
   printf("\n");

    //selection sort
    selection_sort(x,5);

}

void swap(int *x, int *y)
{
    int temp=*y;
    *y=*x;
    *x=temp;
}

void selection_sort(int x[],int size)
{
    int i,j,min;
   for(i=0;i<size-1;i++)
   {
    min=i;
    for(j=i+1;j<size;j++)
    {
        if(x[j]<x[min])
        {
            min=j;
        }
    }

    if(min!=i)
    {
        swap(&x[min],&x[i]);
    }
   }
       printf("Data after sorting\n");

   for(i=0;i<size;i++)
   {
    printf("%d\t",x[i]);
   }
}