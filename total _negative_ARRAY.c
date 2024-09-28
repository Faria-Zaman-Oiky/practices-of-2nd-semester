#include<stdio.h>
int main()
{
    int i,j,arr[100],size;
    printf("enter the size  of the array ");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    int negative=0;
    for(j=0;j<size;j++)
    {
        if(arr[j]<0)
            negative=negative+1;
    }
    printf("total negative %d",negative);
}
