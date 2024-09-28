
#include<stdio.h>
int main()
{
    int arr1[5],arr[2],i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr1[i]);
    for(i=0;i<n;i++)
        printf("%d",arr1[i]);
        for(i=0;i<n;i++)
        {
            arr[i]=arr1[i];
        }for(i=0;i<n;i++)
        printf("%d",arr[i]);
        return 0;


}
