#include<stdio.h>
int main()
{
    int i,n,arr[10];
    printf("enter the number you want input  \n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]<0)
            printf("%d",arr[i]);}

    return 0;
}
