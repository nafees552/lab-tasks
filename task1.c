#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number: ");
	scanf("%d", &n);
	if (n%3==0)
	{
		printf("The number is a multiple of 3");
	}
	else
	{
		printf("The number is not a multiple of 3");
	}
}