#include<stdio.h>
int main()
{
 int n,num=0;
 printf("\n enter the number : ");
 scanf("%d",&n);
 while(n!=0)
{
  num=(num*10)+n%10;
  n/=10;
}
while(num!=0)
{
 switch(num%10)
 {
  
  case 0:
        printf("zero\t");
        break;
  case 1:
       printf("one\t");
       break;
  case 2:
       printf("two\t");
       break;
  case 3:
       printf("three\t");
       break;
  case 4:
       printf("four\t");
       break;
  case 5:
       printf("five\t");
       break;
  case 6:
       printf("six\t");
       break;
  case 7:
       printf("seven\t");
       break;
  case 8:
       printf("eight\t");
       break;
  case 9:
       printf("nine\t");
       break;
}
num/=10;
}
return 0;
}

