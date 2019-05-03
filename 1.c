#include<stdio.h>
int main()
{
	static int i =8;
	if(--i)
		{
			main();
			printf("%d",i);
		}
	return 0;
}
