#include<stdio.h>

//traditional way is functionname( int a[10] ), which can also be used but has its cons

void functionname(int *a)
//when you pass an array to a function, the pointer to the first position gets stored in a
//hence whatever change you make to the array will be globally changed, ie changed everywhere.
{
    int i;
    //we can use a[] as an array like we normally would
    for(i=0;i<10;i++)
        printf("%d ",a[i]);
    //above is a loop to print the array passed
    
}

void main()
{
    int a[10];
    int i;

    for(i=0;i<10;i++)
    {
        a[i] = i;
        //looping through each array element, 
        //and setting its value to that of the loop number 
    }
    functionname(a);
    //above is the function call, where the array a is passed;
    //run the code and make changes to get a better understanding. 
}