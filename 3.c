#include<stdio.h>

int automorphic(int n)
	{
		int sqr=n*n;
		while(n>0)

			{
				if(n%10!=sqr%10)
					return 0;
				n=n/10;
				sqr/=10;
			}
		return 1;
	}
int main()
	{
		int n;
		printf("\n enter the number to be searche for");
		scanf("%d",&n);
		if(automorphic(n))
			printf("\n the number is automorphic");
		else
			printf("\n oops!! its not");

		return 0;
	}

