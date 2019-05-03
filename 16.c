#include<stdio.h>
struct dist
	{
		int feet;
		float inch;
	}d1,d2,sum;
int main()
	{
		printf("enter the information of distance 1");
		printf("\n enter the feet :");
		scanf(" %d",&d1.feet);
		printf("\n enter the inches  :");
		scanf(" %f",&d1.inch);


		printf("\n enter the information of distance 2");
		printf("\n enter the feet :");
		scanf("%d",&d2.feet);
		printf("\n enter the inches :");
		scanf(" %f",&d2.inch);


		sum.feet=d1.feet+d2.feet;
		sum.inch=d1.inch+d2.inch;

		if(sum.inch>12.0)
			{
				sum.inch=sum.inch-12;
				++sum.feet;
			}

		printf("\n sum of distance =  %d\'-%.1f\"",sum.feet,sum.inch);
		return 0;
	}
