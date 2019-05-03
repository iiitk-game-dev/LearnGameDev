#include<stdio.h>
int main()
	{
		int x=10;
		int *ptr;//initialized an integer pointer  ptr
		ptr =&x;//saves the address of x in ptr 
		printf("%d",*ptr);
		return 0;
	}
