#include<stdio.h>
void main()
{
	int number,reverse=0,remainder,n;
	printf("enter the number:");
	scanf("%d",&n);
	number=n;
	while(n>0)
		{
			remainder=n%10;
			reverse=reverse*10+remainder;
			n=n/10;
		}
	if(reverse==number)

		printf("number is pallindrome");
	else 
		printf("number is not pallindrome");
}



		
