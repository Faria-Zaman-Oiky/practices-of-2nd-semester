#include<stdio.h>
int main()
{
    int marks[5],i,n;
    printf("enter the number you want to input %d",n);
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&marks[i]);
    }
    int value=90;
    for(i=0;i<n;i++)
    {
        if(value==marks[i])
            printf("%d found",value);
    }return 0;

}
