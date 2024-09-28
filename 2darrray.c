
#include<stdio.h>.
int main()
{
    int arr[5][5],i,j,row,column;
    printf("row number ");
    scanf("%d",&row);
    printf("\ncolumn number");
scanf("%d",&column);
for(i=0;i<row;i++)
{
    for(j=0;j<column;j++)
    {
        scanf("%d",&arr[i][j]);
    }
}
for(i=0;i<row;i++)
{
    for(j=0;j<column;j++)
    {
        printf("%d",arr[i][j]);
    }printf("\n");
}return 0;
}
