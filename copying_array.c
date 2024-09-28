#include<stdio.h>
int main()
{
    int i,j,arr[10],a[10];
    int size;
    printf("size");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(j=0;j<size;j++)
    {
        a[j]=arr[j];
    }for(j=0;j<size;j++){
    printf("%d",a[j]);}

}
