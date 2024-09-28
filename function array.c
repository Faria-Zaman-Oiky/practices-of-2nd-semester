#include<stdio.h>
int add(int a[50][50], int b[50][50],int size)
{
   int row,col,c[50][50];
   for(row=0;row<size;row++)
   {
       for(col=0;col<size;col++)
       {
           c[row][col]=a[row][col]+b[row][col];
       }
   }
   return c;

}
int main()
{
    int a[50][50],b[50][50],size,result;
    scanf("%d",&size);


 for(int row=0;row<size;row++)
    {for(int col=0;col<size;col++)
        scanf("%d",a[row][col]);
    }
   for(int row=0;row<size;row++)
    {for(int col=0;col<size;col++)
        scanf("%d",b[row][col]);
    }
    result=add(a[50][50],b[50][50],size);for(int row=0;row<size;row++)
    {for(int col=0;col<size;col++)
        printf("%d",result[row][col]);
    }



}
