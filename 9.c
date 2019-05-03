#include<stdio.h>
struct student
	{
		char name[17];
		int roll;
		float marks;
	}s[10];
int main()
	{
		int i;
		printf("\n enter the information :");

		for(i=0;i<3;i++)
	{
		s[i].roll=i+1;
		printf("\n for the roll number %d \n",s[i].roll);
		printf("\n enter the name :");
		scanf(" %[^\n]",&s[i].name);
		printf("\n enter the marks :");
		scanf("%f",&s[i].marks);
		printf("\n");

	}
		printf("\n displaying information");
		for(i=0;i<3;i++)
	{

		float max=s[0].marks;
		printf("\n the roll number is %d",i+1);
		printf("\n the name : %s",s[i].name);
		printf("\n the marks %.1f :",s[i].marks);
		if(s[i].marks>max){
		max=s[i].marks;
		printf("\n %f rollno is highest",max);
	}}
	return 0;
}
