#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100],s2[100];
	int i=0,j=0;

	printf("enter a string\t");
	gets(s1);
	printf("enter a string\t");
	gets(s2);
	for(i=0;s1[i]!='\0';i++);
	for(j=0;s2[j]!='\0';j++);
	if(i==j)
	{printf("strings");
	}
	else
	{printf("str");}

	return 0;

}















