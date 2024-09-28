#include <stdio.h>
int main()
{
    int i,j,k,size,arr[10];
    printf("enter the size");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);

    }
    int max=arr[0];
    for(j=0;j<size;j++)
    {
        if(arr[j]>max)
        {
            max=arr[j];
        }
    }
    int second=arr[0];
    for(k=0;k<size;k++)
    {
        if(arr[k]>second&&arr[k]<max)
        {
         second=arr[k];
        }

    }printf("second largest number in c is %d",second);
}
