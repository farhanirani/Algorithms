#include<stdio.h>
void main()
{
    int row,spaces;
    for(row=1;row<6;row++)
    {
        for(spaces=1;spaces<=row;spaces++)
            {printf("*");}
        printf("\n");
    }
}