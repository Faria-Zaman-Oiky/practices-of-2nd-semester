#include<stdio.h>
int main()
{
    int arr[50],i,size,sum=0;
    printf("enter the size ");scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    {
        if(i%2==1)
        {
            if(arr[i]%2==1)
            {
                sum=sum+arr[i];
                arr[i]=0;
            }
        }
    }
    for(i=0;i<size;i++)
    {
        printf("%d  ",arr[i]);
    }
    printf("sum is %d",sum);
}
