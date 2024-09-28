#include<stdio.h>
int main()
{
    int arr[50],size,i;
    scanf("%d",&size);
    int *p;
    p=arr;
    for(i=0;i<size;i++)
    {
        scanf("%d",p);
        p++;
    }
    p--;
    for(i=0;i<size;i++)
    {
        printf("%d",*p);
        p--;
    }
}
