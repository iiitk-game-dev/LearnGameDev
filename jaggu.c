#include<stdio.h>
int main()
{
 char s[20];
 int i,l;
 printf(" enter the string : ");
 gets(s);
 for(i=0;s[i]!='\0';i++);
 l=i;
 printf(" the size of the string is %d",l);
 return 0;
}
 
