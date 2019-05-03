#include<stdio.h>
int main()
{
	int i,j;
	char s1[100], s2[100];
	printf("enter string s1:\t");
	scanf("%s",s1);
	printf("enter string s2:\t");
	scanf("%s",s2);
	for(i=0;s1[i]!='\0';i++);
	for(j=0;s2[j]!='\0';j++,i++)
	{
		s1[i]=s2[j];
	}

	printf("the new string is %s",s1);


	return 0;

}
