#include<stdio.h>
#include<math.h>
int main()
{
	int num,count=0,original_num,result=0,rem;
	printf("enter a number:\n");
	scanf("%d",&num);
	original_num=num;
	while(num!=0)
	{	num/=10;
		count++;
				}
	num=original_num;
	while(num!=0)
	{	rem=num%10;
		result+=pow(rem,count);
		num/=10;
		
				}
	if(result==original_num)
	printf("armstrong num it means jerry not at all cares");
	else
	printf("not armstrong, does he even cares");

	return 0;


}
