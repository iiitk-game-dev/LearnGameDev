#include<stdio.h>
typedef struct complex
	{
		float real;
		float img;
	}complex;
complex add(complex n1,complex n2);
int main()
	{
		complex n1,n2,temp;
		printf("\n enter the information of the first number :");
		printf("\n enter the real part :");
		scanf("%f",&n1.real);
		printf("\n enter the imaginary part");
		scanf("%f",&n2.img);
		printf("\n enter the information of the second number :");
		printf("\n enter the real part :");
		scanf("%f",&n2.real);
		printf("\n enter the imaginary part :");
		scanf("%f",&n2.img);

		temp=add(n1,n2);
		printf("\n sum = %f + %fi" ,temp.real,temp.img);
		return 0;
	}
complex add( complex n1,complex n2)
	{
		complex temp;
		temp.real=n1.real+n2.real;
		temp.img=n1.img+n2.img;
		return(temp);
	}
