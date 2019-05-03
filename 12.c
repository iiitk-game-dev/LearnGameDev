#include<stdio.h>
int f(int n)
{
	int i,k;
	if(n<=0)
		return n;
	else
		printf("%d    ",n);
		i=f(n-5);
		printf("%d    ",i);
		return n;
}
int main()
{
	int n,k;
	printf("\n enter a number :");
	scanf("%d",&n);
	k=f(n);
	printf("%d\n",k);
	return 0;
}
