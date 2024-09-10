#include<stdio.h>
int main()
{
	char c;
	printf("Input a character: ");
	scanf("%s", &c);
	if(c>='A'&&c<='Z')
	{
		printf("Capital Alphabet");
	}	
	else if(c>='a'&&c<='z')
	{
		printf("Small Alphabet");
	}
	else if(c>=0&&c<=9)
	{
		printf("Number");
	}
	else
	{
		printf("special character");
	}
}