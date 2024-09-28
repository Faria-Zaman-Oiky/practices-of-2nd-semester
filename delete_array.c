#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5},i,position;
    position=2;
    for(i=position-1;i<4;i++)
    {
        a[i]=a[i+1];
    }for(i=position-1;i<4;i++)printf("%d",a[i]);
    return 0;
}
