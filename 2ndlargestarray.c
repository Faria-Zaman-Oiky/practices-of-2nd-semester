#include<stdio.h>    m
int main()
{
    int i,n,largest1,largest2,arr[5];
    printf("enter the number of elements ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    largest1=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>largest1)
            largest1=arr[i];
    }
    largest2=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>largest2&&arr[i]<largest1)
        largest2=arr[i];
    }printf("%d",largest2);
}

