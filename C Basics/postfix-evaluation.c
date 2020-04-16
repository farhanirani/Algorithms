#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>


float stack[100];
int top = -1;


void push(float a)
{
	top++;
	stack[top] = a;
}

float pop()
{
    float temp = stack[top];
	top--;
    return(temp);
}

void main()
{
	char s[100];
	int i;
    int j;
	float a1,a2,ans;
	printf("Enter postfix expression : ");
	scanf("%s",s);

	for (i=0;i<strlen(s);i++)
	{
		if(isdigit(s[i]))
		{
			push(s[i] - '0');
		}
		else
		{
			a2 = pop();
			a1 = pop(); 
            if (s[i] == '+') push(a1+a2);
            else if (s[i] == '-') push(a1-a2);
            else if (s[i] == '*') push(a1*a2);
            else if (s[i] == '/') push(a1/a2);
            else {
                printf("INVALID OPERAND");
                exit(1);
            }
        }
    }
    ans = pop();
    printf("Answer : %f",ans);
}