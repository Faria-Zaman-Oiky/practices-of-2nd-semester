#include <stdio.h>
int main()
{
    int i,j,size,arr[10];
    printf("enter the size of the array ");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(j=0;j<size;j++)
    {
        if(arr[j]<0)
        {
            printf("\n%d",arr[j]);

        }
    }
}
