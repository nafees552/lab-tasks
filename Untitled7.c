#include<stdio.h>
int main()
{
	int a,sa,ad;
	printf("Enter the amount spent on shopping");
	scanf("%d", &a);
	if(a<2000&&a>500)
	{
	printf("The actual amount is %d", a);
	ad=a*0.5;
	printf("\nThe amount after discount is %d",ad);
	sa=a-ad;
	printf("\nThe amount saved is %d",sa);
}
	else if(a>=2000&&a<=3999)
    {
		printf("The actual amount is %d", a);
	ad=a*0.10;
	printf("\nThe amount after discount is %d",ad);
	sa=a-ad;
	printf("\nThe amount saved is %d",sa);
    }
	else if(a>=4000&&a<=5999)
	{
		printf("The actual amount is %d", a);
	ad=a*0.2;
	printf("\nThe amount after discount is %d",ad);
	sa=a-ad;
	printf("\nThe amount saved is %d",sa);
    }
	else if(a>=6000)
	{
		printf("The actual amount is %d", a);
	ad=a*0.35;
	printf("\nThe amount after discount is %d",ad);
	sa=a-ad;
	printf("\nThe amount saved is %d",sa);
}
}