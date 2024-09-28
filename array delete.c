#include<stdio.h>
int main()
{
    int i,size,arr[50],pos;
    printf("enter the size of the array ");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the position ");
    scanf("%d",&pos);
    if(pos<0||pos>size)
    {
        printf("invalid position");
    }
    else
    {
        for(i=pos-1;i<size-1;i++)
        {
            arr[i]=arr[i+1];
        }
        size--;
    }
    for(i=0;i<size;i++)
    {
        printf("%d",arr[i]);
    }
}
