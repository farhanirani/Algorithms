#include<stdio.h>

int max(int a,int b)  //returns greater value of a or b
{
    return a>b?a:b;
}

void main()
{
    int items,totalWeight;
    printf("enter the weight of the sack : ");
    scanf("%d",&totalWeight);
    totalWeight++;

    printf("enter the number of items : ");
    scanf("%d",&items);
    items++;

    int weight[items], value[items], i, j;
    for(i=1;i<items;i++)
    {
        printf("enter weight of item %d : ",i);
        scanf("%d",&weight[i]);
        printf("enter profit/value of item %d : ",i);
        scanf("%d",&value[i]);
    }   //note weight and value arrays start from index 1 and go up till items+1

    int knapsack[items][totalWeight+1];

    for(i=0;i<items;i++)
        knapsack[i][0]=0;
    for(i=0;i<totalWeight;i++)
        knapsack[0][i]=0;

    //main algo
    for(i=1;i<items;i++)
    {
        for(j=1;j<totalWeight;j++)
        {
            if(weight[i] > j)
            {
                knapsack[i][j] = knapsack[i-1][j];
            }
            else
            {
                knapsack[i][j] = max(value[i]+knapsack[i-1][j-weight[i]] , knapsack[i-1][j]);
            }
        }
    }

    printf("knapsack matrix : \n");
    for(i=0;i<items;i++)
    {
        for(j=0;j<totalWeight;j++)
            printf("%d ",knapsack[i][j]);
        printf("\n");
    }

    i=items-1;
    j=totalWeight-1; //equal to 2d array final position


    printf("maximum value that can be placed in the sack : %d\n",knapsack[i][j]);


    while(i>0 && j>0)
    {
        if(knapsack[i-1][j] == knapsack[i][j])
        {
            i--;
        }
        else
        {
            printf("item in the sack, weight : %d and value : %d\n",weight[i],value[i]);
            j = j - weight[i];
            i--;
        }
    }
}