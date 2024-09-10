#include<stdio.h>
int main()
{
	int t;
	printf("Enter the time for greetings (24 hours format): ");
	scanf("%d", &t);
	if(t>=5&&t<=11)
	{
		printf("Good Morning");
	}
	else if(t>=12&&t<=18)
	{
		printf("Good Evening");
	}
	else if(t>18 && t<=24)
	{
		printf("Good Night");
	}
	else 
	printf("Invalid time");
}