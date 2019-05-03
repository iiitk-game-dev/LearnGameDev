#include<stdio.h>
struct student
	{
		char name[17];
		int  roll;
		float marks;
	}s;
int main()
	{
		printf("\n enter the informations:");
		printf("\n enter the name");
		gets(s.name);
		printf("\n enter the roll no ");
		scanf("%d",&s.roll);
		printf("\n enter the marks ");
		scanf("%f",&s.marks);

		printf("\n displaying information ");
		puts(s.name);
		printf("\n %d\n",s.roll);
		printf("\n %f\n",s.marks);

		return 0;
}
