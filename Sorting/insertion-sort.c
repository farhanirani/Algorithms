#include<stdio.h>

void insertionsort(int a[], int length)
{
    int i,j,val;
    for(i=1;i<length;i++)
    {
        val=a[i];
        for(j=i-1;j>=0;j--)
            if(val<a[j])
                a[j+1]=a[j];
            else
                break;

        a[j+1]=val;
    }
}

void main()
{
    int length,i;
    printf("enter length of array : ");
    scanf("%d",&length);
    int a[length];
    printf("enter the array\n");
    for(i=0;i<length;i++)
        scanf("%d",&a[i]);
    insertionsort(a,length);
    printf("sorted array after insertion sort is \n");
    for(i=0;i<length;i++)
        printf("%d  ",a[i]);
}