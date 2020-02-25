#include<stdio.h>

int min(int a,int b)
{
	if(a<b) return a;
	else return b;
}

void main()
{
	int size;
	printf("entersize of matrix");
	scanf("%d",&size);
	int a[size][size];
	int i,j,k;
	printf("enter elements in matrix\n");
	for(i=0;i<size;i++)
		for(j=0;j<size;j++)
			scanf("%d",&a[i][j]);
			
	printf("entered matrix\n");
	for(i=0;i<size;i++){
		for(j=0;j<size;j++)
			printf("%d\t",a[i][j]);
		printf("\n");}
			
	for(k=0;k<size;k++){
		for(i=0;i<size;i++){
			for(j=0;j<size;j++){
				a[i][j]=min(a[i][k]+a[k][j],a[i][j]);
			}
		}
	}
	
	printf("Shortest distance matrix\n");
	for(i=0;i<size;i++){
		for(j=0;j<size;j++)
			printf("%d\t",a[i][j]);
		printf("\n");}
}