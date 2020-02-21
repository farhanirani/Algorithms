#include<stdio.h>

void main()
{
    int i;
    int a[10];

    //an array is a

    //above is the declaration of an integer array with name a and size 100;
    //indexing of arrays start from 0...
    //first element is called a[0] and last is a[9]
    //it means that the array starts from 0, instead of usually 1

    
    //how to read elements into an array
    //we make a repetitive loop which goes from 0 to 9, ie the length of the array

    //if we were to give value to array elements using logic, it would be like:
    // loop(i from 0 to array length -1 )
    //     take in value in array at position i
    // end loop

    for(i=0 ; i <= 10 - 1 ; i++)
    {
        scanf("%d",&a[i]);
    }
    //all array elements will be the same, ie integers in this case.

    //print the array
    //same logic, make a loop from 0 to length-1, and print

    for(i=0 ; i<=10-1 ; i++)
    {
        printf("%d",a[i]);
    }      
}