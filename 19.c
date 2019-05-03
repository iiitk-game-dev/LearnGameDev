
#include<stdio.h>
#include<stdlib.h>
int main()
	{
		int n,sum=0;
		int i;
		printf("\n enter the number");
		scanf("%d",&n);
		int *p=(int *)malloc(sizeof(int)*n);
		if(p==NULL)
			{
				printf("\n oops!!! not enough memory ");
				exit(0);
			}
		for(i=0;i<n;i++)
			{
				scanf("%d",p+i);
				sum+=*(p+i);
			}
		printf("%d",sum);
		return 0;
	}
