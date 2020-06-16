#include<stdio.h>

void swap(int a[], int i, int j)
{
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

void selectionsort(int a[],int length)
{
    int i,j, min, swapPos;
    
    for(j=0; j<length-1; j++)
    {
        swapPos = j;
        for(i=j+1; i<length; i++)
        {
            if(a[i] < a[swapPos]) {
                swapPos = i;
            }
        }
        swap(a,swapPos,j);
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
    selectionsort(a,length);
    printf("sorted array after selection sort is \n");
    for(i=0;i<length;i++)
        printf("%d  ",a[i]);
}