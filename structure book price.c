#include<stdio.h>
struct Book
{char title[50];
char author[50];
int price;

} ;
int main()
{
    struct Book b1,b2,b3,maxprice,minprice;

    printf("input info for book 1 title,author,price");
    scanf("%s%s%d",&b1.title,&b1.author,&b1.price);
    printf("input info for book 2 title,author,price");

    scanf("%s%s%d",&b2.title,&b2.author,&b2.price);
    printf("\ninput info for book 3 title,author,price");
    scanf("%s%s%d",&b3.title,&b3.author,&b3.price);

    if(b1.price>b2.price && b1.price>b3.price)
        maxprice=b1;
    else if(b2.price>b1.price&&b2.price>b3.price)
        maxprice=b2;
    else
    maxprice=b3;
    if(b1.price<b2.price && b1.price<b3.price)
        minprice=b1;
    else if(b2.price<b1.price&&b2.price<b3.price)
        minprice=b2;
    else
    minprice=b3;
    printf("\n expensive title%s,author%s,price%d",maxprice.title,maxprice.author,maxprice.price);
     printf("\n least expensive title%s,author%s,price%d",minprice.title,minprice.author,minprice.price);



}
