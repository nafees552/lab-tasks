#include<stdio.h>
int main()
{
	char e;
	int a,b;
	printf("Enter the two numbers: ");
	scanf("%d %d", &a, &b);
	printf("Enter the operator to perform");
	scanf("%s", &e);
	switch(e)
	{
	case '+':
		printf ("%d",a+b);
		break;
	case '-':
		printf ("%d",a-b);
		break;
	case '*':
		printf ("%d",a*b);
		break;
	case '/':
		printf ("%d",a/b);
		break;
	default:
		printf("Invalid Operator");
    }
}