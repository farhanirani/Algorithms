#include<stdio.h>
#include<stdlib.h>

void binarysearch(int *a,int start, int end, int target)
{
    if(end < start){
        printf("array does not contain the target element");
        exit(1);
    }
    int mid = (start+end)/2;
    if(a[mid]==target){
        printf("element %d found at location %d",target,mid+1);
        exit(1);
}                                       
    else if(a[mid] > target)
            //new end would be mid-1, because target in the lower half
        binarysearch(a,start,mid-1,target);
    else     //new start would be mid+1, because target in upper half
        binarysearch(a,mid+1,end,target);
}

void main()
{
    int length,i,target;
    printf("enter length of array : ");
    scanf("%d",&length);
    int a[length];
    printf("enter the array in ascending order\n");
    for(i=0;i<length;i++)
        scanf("%d",&a[i]);
    printf("\nenter target element : ");
    scanf("%d",&target);
    binarysearch(a,0,length,target);
}