#include<stdio.h>
int main()
{
	int i,n,count=0;
	printf("enter a num");
	scanf("%d",&n);

	for(i=2;i<n;i++)

	{if(n%i==0)
	count++;
	
	
	break;
}
	if(count>=1)
	printf("no. is not prime");
	else
	printf(" you are shit");
return 0;
}
