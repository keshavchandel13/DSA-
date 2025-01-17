#include<stdio.h>
int  main()
{
    int x[6];
    printf("Enter the elements in the array\n");
    for(int i=0;i<6;i++)
    {
    scanf("%d",&x[i]);
    }
    printf("Data before sorting\n");
    for(int i=0;i<6;i++)
    {
        printf("%d\t",x[i]);
    }
    printf("\n");
     
     //Insertion sort

     int i,key,j;
     for(i=1;i<6;i++)
     {
        key=x[i];
        j=i-1;
        while(j>=0 && x[j]>key)
        {
            x[j+1]=x[j];
            j=j-1;
        } 
        x[j+1]=key;
     }
      printf("Data after sorting\n");
    for(int i=0;i<6;i++)
    {
        printf("%d\t",x[i]);
    }
    printf("\n");
}