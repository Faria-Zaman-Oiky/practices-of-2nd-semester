#include<stdio.h>
int main()
{
    int i,j,size,arr[10];
    printf("enter the size of the array ");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    int even=0,odd=0;
    for(j=0;j<size;j++)
    {
        if(arr[j]%2==0)
        {
            even=even+1;
        }
        else
            odd=odd+1;
    }
    printf("even %d odd %d",even,odd);
}
