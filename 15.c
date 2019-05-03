#include<stdio.h>
int main()
	{
		int v[3]={10,100,200};
		int *ptr,i;
		ptr=v;
		for(i=0;i<3;i++)
			{
				printf("\n %d",*ptr);
				printf("\n %p",ptr);
				ptr++;
			}
		return 0;
	}

