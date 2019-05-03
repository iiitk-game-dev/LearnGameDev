#include<stdio.h>
struct a
	{
		int x,y,z;
	};
int main()
	{
		struct a a1={1,2,3};
		struct a a2={.y=3,.x=2,.z=1};
		printf("%d %d %d",a1.x,a1.y,a1.z);
		printf("\n %d %d %d ",a2.x,a2.y,a2.z);
		return 0;
	}
