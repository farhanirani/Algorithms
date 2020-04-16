#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int stack[100];
int top = -1;

void push( int data )
{
    top++;
    stack[top] = data;
}

int pop()
{
    int data;
    data = stack[top];
    top--;
    return data;
}

int priority( char a)
{
    if( a == '+' || a == '-')
        return 1;
    if( a == '/' || a == '*')
        return 2;
}

void main()
{
    char s[100];
    int data,i;

    printf("Enter expression : ");
    scanf("%s",s);

    for(i=0;i<strlen(s);i++) {
        if (s[i] == '(') {
            push(s[i]);
        }
        else if (s[i] == ')') {
            do  {
                data = pop();
                if(data == '(') break;
                printf("%c",data);
            }while(1);
        } 
        else if (s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/') {
            while(top != -1 && stack[top] != '(' && priority(stack[top]) > priority(s[i]) )
            {
                data = pop();
                printf("%c",data);
            }
            push(s[i]);
        }
        else {
            printf("%c",s[i]);
        }

    }

    while(top!=-1){
        data = pop();
        printf("%c",data);
    }

}




