#include<stdio.h>
int main()
{
    int marks[5],i,sum=0;
        for(i=0;i<5;i++)
        {
            scanf("%d",&marks[i]);
            sum=sum+marks[i];
        }
    printf("%d",sum);
}
