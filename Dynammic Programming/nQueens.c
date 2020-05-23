#include<stdio.h>
#include<stdlib.h>

int x[100], n;

int place(int rowNum,int i) 
{
    for(int j=1; j<rowNum; j++) {
        if ( ( x[j] == i ) || (abs(x[j]-i) == abs(j-rowNum)) ) {
            return 0;
        }
    }
    return 1;
}

void printt(int n)
{
    for(int temp=1; temp < n+1; temp++) {
        for(int temp2=1; temp2 <n+1; temp2++) {
            if( temp2 == x[temp] )
                printf(" Q ");
            else
                printf(" * ");
        }
        printf("\n");
    }
    printf("\n");
}

void nQueens(int rowNum, int n)
{
    for( int i=1; i<n+1; i++) {
        if (place(rowNum,i) == 1) {
            x[rowNum] = i;
            if (rowNum == n)
                printt(n);
            else
                nQueens(rowNum+1,n);
        }
    }
}

int main()
{
    printf("Enter number fo queens : ");
    scanf("%d",&n);
    for( int i=1; i<n; i++)
        x[i] = 0;
    nQueens(1,n);
}