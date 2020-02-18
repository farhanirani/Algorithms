#include<stdio.h>

void bubblesort(int a[], int length)
{
    int i,j,temp,flag;
    for(i=0;i<length-1;i++){
        flag=1;
        for(j=0;j<length-i-1;j++){
            if(a[j] > a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=0;
            }
            if(flag==1) break;
        }
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
    bubblesort(a,length);
    printf("sorted array is array\n");
    for(i=0;i<length;i++)
        printf("%d  ",a[i]);
}