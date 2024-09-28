#include <stdio.h>
int main()
{
    int i,size,arr[30],num,pos;
    printf("input  the size of the array ");
    scanf("%d",&size);
    printf("\ninput the number ");
    scanf("%d",&num);
    printf("\ninput the position ");scanf("%d",&pos);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    if(pos>size+1||pos<0)
        printf("invalid position");
    else
    {
        for(i=size;i>=pos;i--)
            arr[i]=arr[i-1];

    arr[pos-1]=num;
    size++;}
    for(i=0;i<size;i++)
        printf("%d",arr[i]);


}
