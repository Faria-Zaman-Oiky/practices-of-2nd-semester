#include<stdio.h>
int main()
{
    int i, n,p,v,t,count=0;
    printf("enter the total number of problem ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        scanf("%d%d%d",&p,&v,&t);
        if((p==1&&v==1&&t==0)||(p==1&&v==0&&t==1)||(p==0&&v==1&&t==1)||(p==1&&v==1&&t==1))
            count=count+1;

    }printf("%d",count);
}
