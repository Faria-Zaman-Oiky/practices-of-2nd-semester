#include<stdio.h>
int main()
{
    int a[5],i,n;
    printf("enter total input number ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        a[i]=a[i+1];
    }for(i=;i<n-1;i++)
    {
       printf("\n%d",a[i]);
    }return 0;

}
