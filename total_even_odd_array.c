#include<stdio.h>
int main()
{
    int i,n,arr[5],even=0,odd=0;
    printf("enter the number you want to input");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)

{
 if(arr[i]%2==0)
        even=even+1;
 else
    odd=odd+1;
}printf("e%d%d",even,odd);

}
