#include<stdio.h>
void main()
{
	int number,arm=0,remainder,n;
	printf("enter the number:");
	scanf("%d",&n);
	number=n;
	while(n>0)
		{
			remainder=n%10;
			arm=remainder*remainder*remainder+arm;
			n=n/10;
		}
	if(number==arm)
	
		printf("number is armstrong number");
	

	else
		printf("number is not armstrong number");
		
}
		
