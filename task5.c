#include<stdio.h>
int main()
{
	int id,name,unit;
	float bill;
	printf("Enter the costumer id: ");
	scanf("%d", &id);
	printf("Enter the costumer name: ");
	scanf("%d", &name);
	printf("Enter the units consumed: ");
	scanf("%d", &unit);
	if(unit<=199)
	{
		bill=unit*16.20;
		printf("The total bill is: %f", bill);
	}
	else if(unit>=200&&unit<300)
	{
		bill=unit*20.10;
		printf("The total bill is: %f", bill);
	}
	else if(unit>=300&&unit<500)
	{
		bill=unit*27.10;
		printf("The total bill is: %f", bill);
	}
	else if(unit>=500)
	{
		bill=unit*35.90;
		printf("The total bill is: %f", bill);
		if(unit>18000)
		{
		bill*=1.15;
		printf("The total bill is: %f", bill);
	 }
	}
}