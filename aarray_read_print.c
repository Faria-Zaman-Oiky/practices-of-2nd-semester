#include <stdio.h>
int main()
{
    int i,j,size,arr[10];
    printf("Enter the size of the array ");
    scanf("%d",&size);
    for(i=0;i<=size-1;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(j=0;j<=size-1;j++)
    {
        printf("%d",arr[j]);
    }
    return 0;
}
