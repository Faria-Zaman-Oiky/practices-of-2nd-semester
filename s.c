#include <stdio.h>
int main()
{
    int row,col;
    for(int row=0;row<10;row++)
    {
        for(int col=0;col<10;col++)
        {if(col%2!=0)
            printf("*");
        }
        printf("\n");
    }
}
