#include<stdio.h>
void main()
{
	int number,reverse=0,remainder;
	printf("enter the number:");
	scanf("%d",&number);
	while(number>0)
		{
			remainder=number%10;
			reverse=reverse*10+remainder;
			number=number/10;
		}
	printf("Reverse of number is %d",reverse);
}


		
