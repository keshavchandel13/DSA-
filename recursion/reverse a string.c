#include<stdio.h>
#include<string.h>
void rev (char *string,int start,int end)
{
    if(start>=end)
    {
        return;
    }
    char temp=string[start];
    string[start]=string[end];
    string[end]=temp;
    rev(string,start+1,end-1);
}
int main()
{
    char string[10];
    printf("Enter the string\n");
    scanf("%s",&string);
    printf("string before reversing %s\n",string);
    rev(string,0,strlen(string)-1);
    printf("string after reversing %s",string);
}