#include<stdio.h>
#include<string.h>

void lcs(char *x, char *y)
{
    //finding the LCS and direction matrices
    int i,j,xlength,ylength;
    xlength=strlen(x);
    ylength=strlen(y);
    
    int val[xlength+1][ylength+1];
    char direction[xlength+1][ylength+1];
    
    for(i=0;i<xlength+1;i++)
        val[i][0]=0;
    for(j=0;j<ylength+1;j++)
        val[0][j]=0;
    
    for(i=1;i<xlength+1;i++){
        for(j=1;j<ylength+1;j++)
        {
            if(x[i-1]==y[j-1]){
                val[i][j]=val[i-1][j-1]+1;
                direction[i][j]='d';//d for diagonal element + 1
            }
            else
            if(val[i][j-1]>=val[i-1][j]){
                val[i][j]=val[i][j-1];
                direction[i][j]='l';//l for from left element
            }    
            else
            {
                val[i][j]=val[i-1][j];
                direction[i][j]='u';//u for from upper element
            }
        }
    }
    //to check the matrices, LCS values and directional matrix
    // for(i=0;i<xlength+1;i++){
    //     for(j=0;j<ylength+1;j++)
    //         printf("%d  ",val[i][j]);
    //     printf("\n");
    // }
    // for(i=1;i<xlength+1;i++){
    //     printf("   ");
    //     for(j=1;j<ylength+1;j++)
    //         printf("%c  ",direction[i][j]);
    //     printf("\n");
    // }

    //to print the LCS

    i=xlength;
    j=ylength;
    char final[i>j?i:j];
    int temp=0;

    while(i>=0 && j>=0)
    {
        if(direction[i][j]=='d')
        {
            final[temp++]=x[i-1];
            i--;j--;
        }
        else if(direction[i][j]=='u')
            i--;
        else    
            j--;
    }
    temp--;
    //printing final in reverse order
    printf("LCS IS : ");
    while(temp!=-1){
        printf("%c",final[temp]);
        temp--;
    }
}

void main()
{
	char x[100],y[100];
	printf("enter string x : ");
	gets(x);
	printf("enter string y : ");
	gets(y);
	lcs(x,y);
}
