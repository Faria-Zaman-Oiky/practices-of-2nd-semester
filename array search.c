#include<stdio.h>
int main()
{
    int i,size,arr[50],found=0,tosearch;
    printf("enter the size of the array ");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf(" enter the number you want to search ");
    scanf("%d",&tosearch);
    for(i=0;i<size;i++)
    {
        if(arr[i]==tosearch)
           {

            found=1;
        break;
        }
    }
    if
        (found==1)
    {
        printf(" the number has been found at %d  position",i+1);
    }
    else
        printf("the number has not been found");
}
