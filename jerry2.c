#include<stdio.h>
int main()
{
	int sum=0,rem,num,no;
	printf("enter a number:\n");
	scanf("%d",&num);
	no=num;
	while(num!=0)
	{
		rem=num%10;
		sum=sum*10+rem;
		num/=10;
				}
	if(sum==no)
	{ printf("it is a palindrome, its nothing");
	  							}

	else
	{ printf("it is not a palindrome, i think too much");
								}

	return 0;

}
