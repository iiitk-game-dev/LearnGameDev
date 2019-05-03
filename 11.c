#include<stdio.h>
//n indicates the value we input
//m indicates the current value to be printed
//flag indicates wether to add or subtract 5 initially true

void  func(int n,int m,int flag)
	{
		printf("\n %d",m);
//if we aregoing to n andreached there then done right!!!
		if(flag==0&&n==m)
		return ;
//if we are moving to 0 or negetive
		if(flag)
		{
			if(m-5>0)
			func(n,m-5,1);
			else
			func(n,m-5,0);
		}
		else
			func(n,m+5,0);
	}
	int main()
{
	int n=-10;
	func(n,n,1);
	return 0;
}
