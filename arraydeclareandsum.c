
#include<stdio.h>
int main(){
    int marks[10],i,n,sum=0;
    printf("enter the number you want to input %d\n",n);
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&marks[i]);
        sum=sum+marks[i];

    }
    for(i=0;i<n;i++)
    {
        printf("%d",marks[i]);

    }
    printf("\n%d",sum);
    return 0;



}
