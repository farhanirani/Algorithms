#include<stdio.h>

void functionname(int aa, int bb) //this is known as function decleration

//void - specifies the return type of the function.
//     - the return type can be void/int/float/double/char...etc

//the names you give in the function parameter are known as FORMAL PARAMETERS.
//they will be the variable names you will use in this function.
//it does not have to match what the parameters when you call it.
{
    //this is the function definition

    int temp;

    temp = aa;
    aa = bb;
    bb = temp;
    //swapped aa and bb

    printf("aa is %d and bb is %d",aa,bb);
}

void main()
{
    int a,b;
    printf("enter a and b");
    scanf("%d%d",&a,&b);

    functionname( a , b );
    //this is known as the function call.

    //you pass the same number of parameters with the same data type to the function.
    //here a and b are known as actual parameters.
}