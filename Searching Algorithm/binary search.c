#include<stdio.h>
int main()
{
    int x[20],size,i,j;
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    printf("Enter the elements in the array\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<size-1;i++)
    {
        for(j=0;j<size-1-i;j++)
        {
            if(x[j]>x[j+1])
            {
                int temp=x[j];
                x[j]=x[j+1];
                x[j+1]=temp;

            }

        }
    }
     printf("The sorted array is \n");
    for(i=0;i<size;i++)
    {
        printf("%d\t",x[i]);
    }
    printf("\n");
    int num;
    printf("Enter the number you want to find\n");
    scanf("%d",&num);
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    while(start<=end)
    {
        if(x[mid]==num)
        {
            printf("Number found");
            return;
        }
        if(num>x[mid])
        {
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=(start+end)/2;

    }
    if(start>end){
        printf("Number not found\n");
    }

}
