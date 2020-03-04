#include<stdio.h>
int b[5];

void merge(int a[], int left, int mid, int right)
{
    int l1, l2, i;

    for(l1 = left, l2 = mid + 1, i = left; l1 <= mid && l2 <= right; i++) 
    {
        if(a[l1] <= a[l2])
            b[i] = a[l1++];
        else
            b[i] = a[l2++];
    }

    while(l1 <= mid)    
        b[i++] = a[l1++];

    while(l2 <= right)   
        b[i++] = a[l2++];

    for(i = left; i <= right; i++)
        a[i] = b[i];
}

void mergesort(int a[], int left, int right)
{
    if(left<right)
    {
        int mid = (left + right)/2;
        mergesort(a,left,mid);
        mergesort(a,mid+1,right);
        merge(a,left,mid,right);
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
    mergesort(a,0,length-1);
    printf("sorted array after merge sort is \n");
    for(i=0;i<length;i++)
        printf("%d  ",a[i]);
}