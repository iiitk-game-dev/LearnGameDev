#include<stdio.h>
int usum(int n,int m)
	{
		int res=0;
		int p=1;
		int sum;
			while(n||m)
				{
					sum=(n%10)+(m%10);
					sum%=10;
					res=(sum*p);
					n/=10;
					m/=10;
					p*=10;
				}
		return res;
	}
int main()
	{
		int n,m;
		printf("\n enter the two numbers");
		scanf("%d %d",&n,&m);
		int unsum=usum(n,m);
		printf("\n the unusual sum is %d",unsum);
		printf("\n the difference is %d",((n+m)-unsum));
		return 0;
	}
