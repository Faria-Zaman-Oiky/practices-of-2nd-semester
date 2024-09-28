#include<stdio.h>
int main()
{
    int i,count=0,num;
    printf("enter the number ");
    scanf("%d",&num);
    for(i=0;i<=num;i++)
    {
        if(num>0)
        {
            count++;
            num=num/10;

        }
    }printf("%d",count);
}
