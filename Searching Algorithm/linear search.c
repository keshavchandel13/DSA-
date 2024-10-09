#include<stdio.h>
int main()
{
    int x[20],size,i,num;
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    printf("Enter the number in the array\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&x[i]);
    }
    printf("Enter the number you want to find\n");
    scanf("%d",&num);
    for(i=0;i<size;i++)
    {
        if(x[i]==num)
        {
            printf("Number found !");
        }
    }
}
