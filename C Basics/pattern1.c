#include<stdio.h>
void main()
{
    int row,i,spaces,value=1;
    for(spaces=10,row=1;row<=4;row++,spaces--)
    {
        for(i=1;i<spaces;i++)
            printf("  ");
        
        for(i=1;i<row;i++)
        {
            printf(" %d",value);
            value++;
        }
        printf("\n");
    }
}