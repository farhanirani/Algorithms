#include<stdio.h>
int length;
void quicksort(int *a, int left, int right)
{
    int i,j,k,temp,pivot;
    i=left;
    j=right;
    pivot=a[(left+right)/2];

    while(i<j)
    {
        while(a[i]<pivot) 
            i++;
        while(pivot<a[j])
            j--;
        if(i<j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }

    // printf("output of pass \n");
    // for(int k=0;k<length;k++)
    // printf("%d\t",a[k]);
    // printf("\n");
    
    if(left<i)
        quicksort(a,left,i-1);
    if(j<right)
        quicksort(a,j+1,right);
}


void main()
{
    int i;
    printf("enter length of array : ");
    scanf("%d",&length);
    int a[length];
    printf("enter the array\n");
    for(i=0;i<length;i++)
        scanf("%d",&a[i]);

    quicksort(a,0,length-1);

    printf("sorted array after quick sort is \n");
    for(i=0;i<length;i++)
        printf("%d  ",a[i]);
}