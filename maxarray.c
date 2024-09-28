#include <stdio.h>
int main()
{
    int marks[5],i,n;
    printf("enter the number you want to input:%d",n);
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&marks[i]);
    }
    int max=marks[0];
    for(i=0;i<n;i++)
    {
        if(max<marks[i])
        {
            max=marks[i];
        }
    }printf("%d",max);
}
