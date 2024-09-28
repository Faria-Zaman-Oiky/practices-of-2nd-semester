#include <stdio.h>
int main()
{
    int cost,sell,profit,loss;
    scanf("%d%d",&cost,&sell);
    if (cost<sell)
    {
        profit=sell-cost;
        printf("profit-%d",profit);
    }
    else if(sell<cost)
    {
        loss=cost-sell;printf("loss-%d",loss);
    }
    else
        printf("no profit no loss");
}
