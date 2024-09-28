#include<stdio.h>
int main()
{
    int a[5],i,n,minimum;
    printf("Enter the number you want to input %d ",n);
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
 for(i=0;i<n;i++)
    {
        printf("%d",a[i]);

    }
    minimum=a[0];
    for(i=0;i<n;i++){
        if(minimum>a[i])
        {
            minimum=a[i];}}
        printf("\n%d",minimum);
    return 0;
}




