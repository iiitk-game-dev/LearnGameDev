#include<stdio.h>
struct book
	{
		int x,y;
	}p1;
int main()
	{
		struct book p1={0,1};
		p1.x=20;
		printf("\n %d and %d",p1.x,p1.y);
		return 0;
}
