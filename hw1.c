#include<stdio.h>
#define no 256
int func(char str[])
	{
		int count[no]={0};
		for(int i=0;str[i];i++)
		count[str[i]]++;
		int odd=0;
		for(int i=0;i<no;i++)
			{
				if(count[i]&1)
					odd++;
				if(odd>1)
					return 0;
			}
		return 1;
}
int main()
	{
		char str[256];
		printf("\n enter the string ");
		scanf("%s",str);
		if(func(str))
			printf("\n yes");
		else
			printf("\n no");
		return 0;
}
