#include<stdio.h>
int main()
{
	int x,y,r=1,i,t;
	printf("\n enter the number or base");
	scanf("%d",&x);
	printf("\n enter the power of the base");
	scanf("%d",&y);
	for(i=1;i<=y;i++)
		{
			t=x;
			r=r*t;
		}
	printf("\n the result is %d ",r);
	return 0;
}
