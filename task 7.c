#include<stdio.h>
int main()
{
	int i;
	printf("Enter the intensity of the light(between 0-1000): ");
	scanf("%d", &i);
	if(i>=0&&i<100)
	{
		printf("It is evening");
	}
	else if(i>=100&&i<=500)
	{
		printf("lighting");
		
	}
	else
	{
		printf("It is exposed under sunshine");
	}
	
	
}