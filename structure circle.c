#include<stdio.h>
struct circle
{
 float radius;
};
float area(struct circle c)
{
    return 3.14*c.radius*c.radius;
}
 float perimeter(struct circle d)
 {
     return 2*3.14*d.radius;
 }
int main()
{
    struct circle c1,c2;
    printf("enter radius for circle 1");
    scanf("%f",&c1.radius);
    printf("\n  enter radius for circle 2 ");
scanf("%f",&c2.radius);
area(c1);
area(c2);
perimeter(c1);
perimeter(c2);
printf("\n area 1 %f perimeter  1 %f",area(c1),perimeter(c1));
printf("\n area 2 %f perimeter  2 %f",area(c2),perimeter(c2));
}
