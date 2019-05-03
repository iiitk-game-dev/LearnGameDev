#include<stdio.h>
#include<stdlib.h>
int main()
	{
		int i;
		int *p=(int *)malloc(sizeof(int)*2);
		int *p1;
		*p=10;
		*(p+1)=20;
		p1=(int *)realloc(p,sizeof(int)*3);
		*(p1+2)=30;
		for(i=0;i<3;i++)
		printf(" %d \t",*(p1+i));
		
		return 0;
	}

