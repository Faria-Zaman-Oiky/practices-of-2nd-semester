#include <stdio.h>
int main()
{
    int a[10][10];
    int b[10][10];
    int c[10][10];
    int row,col,size;
    printf("enter the size of the matrix ");
    scanf("%d",&size);
    for(row=0;row<size;row++)
    {
        for(col=0;col<size;col++)
        {
            scanf("%d",&a[row][col]);
        }
    }for(row=0;row<size;row++)
    {
        for(col=0;col<size;col++)
        {
            scanf("%d",&b[row][col]);
        }
    }for(row=0;row<size;row++)
    {
        for(col=0;col<size;col++)
        {
     c[row][col]=a[row][col]+b[row][col];
        }
    }

    for(row=0;row<size;row++)
    {
        for(col=0;col<size;col++)
        {
            printf("%d",c[row][col]);
        }printf("\n");
    }

}
