#include<stdio.h>
int main()

{
	int i,flag=0,a;
	printf("enter a prime number:\n");
	scanf("%d",&a);
	for(i=2;i<a/2;i++)
	{
		if(a%i==0)
		flag=1;
		break;
				}
	if(flag==1)
	{printf("it is not a prime number");
	}
	else
	{printf("it is a prime number");}


	return 0;

}
