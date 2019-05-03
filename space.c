#include<stdio.h>
int main()
{
 char s1[20],s2[20];
 int i;
 printf("\n enter the first string ");
 gets(s1);
 for(i=0;s1[i]!='\0';i++)
{
  if(s1[i]==' ')
  printf("\n enter the string again : ");
  gets(s1);
  break;
}
 printf("\n enter the sec string : ");
 gets(s2);
 for(i=0;s2[i]!='\0';i++)
{
 if(s2[i]==' ')
 printf("\n enter the string again ");
 gets(s2);
 break;
}
return 0;
}
