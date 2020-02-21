#include<stdio.h> //this includes the header file stdio

void main()
{
    int a,b,c; //three variables a,b,c defined with the data type of integer

    printf("%Enter a and b"); //printf("...") is used to display

    scanf("%d%d",&a,&b);
    //scanf is used to take in input vaues
    //%d is the format specifier used to identify which data type is being entered.
    //in this case, %d is for the integer.
    //the number of format specifiers should match the number and type of the variables
    //&a is used to store the input in the address of variable a

    c = a;
    a = b;
    b = c;
    //above is used to swap a and b
    //first we store a in c, then assign value b to a, and then c to a;

    printf("a is %d and b is %d",a,b);
    //%d in printf prints the variable mentioned after ",  
    //the variable type should match the format specifier.
}