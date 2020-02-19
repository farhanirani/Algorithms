#include<stdio.h>
#include<string.h>

void printlcs(char b[][50],char x[50],int i,int j)
{
	if(i==0 || j==0)
		return;
	if(b[i][j]=='+')
	{
		printlcs(b,x,i-1,j-1);
		printf("%c",x[i-1]);
	}
	else if(b[i][j]=='-')
		printlcs(b,x,i-1,j);
	else
		printlcs(b,x,i,j-1);
}
void lcs(char x[50],char y[50])
{
	int m,n,i,j;
	char b[50][50];
	char c[50][50];
	m=strlen(x);
	n=strlen(y);
	for(i=0;i<m;i++)
		c[i][0]=0;
	for(j=0;j<n;j++)
		c[0][j]=0;
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(x[i-1]==y[j-1])
			{
				c[i][j]=c[i-1][j-1]+1;
				b[i][j]='+';
			}
			else if(c[i-1][j]>=c[i][j-1])
			{
				c[i][j]=c[i-1][j];
				b[i][j]='-';
			}
			else
			{
				c[i][j]=c[i][j-1];
				b[i][j]='*';
			}
		}
	}
	printlcs(b,x,m,n);
}

void main()
{
	char x[100],y[100];
	printf("Enter the string:-\t");
	gets(x);
	printf("Enter the second string:-\t");
	gets(y);
	printf("Lowest Common Subsequence:-\n");
	lcs(x,y);
}
