#include<stdio.h>
float triangle(float b,float h)
	{
		float area;
		area=0.5*b*h;
		return area;
	}
int square(int a)
	{
		int area;
		area=a*a;
		return area;
	}
int main()
	{
		int a;
		int choice;
		float b,h,area;
		printf("\n 1.  triangle  ");
		printf("\n 2.  square    ");
		printf("\n  enter the  choice  ");
		scanf("%d",&choice);
		switch(choice)

	{
		case 1:
		printf("\n enter the height and breadth");
		scanf("%f %f",&b,&h);
		area=triangle(b,h);
		printf("\n %f",area);
		break;

		case 2:
	                printf("\n enter the side :");
                scanf("%d",&a);
		area=square(a);
		printf("%d",area);
		break;

		default:
		printf("\n oops! wrong choice  ");

	}
	return 0;
}

