#include <stdio.h>
int main()
{
    int sum,i,j,size=0,arr[10];
    printf("enter the size of the array ");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(j=0;j<size;j++)

    {
        sum=sum+arr[j];
    }
    printf("%d",sum);
}
