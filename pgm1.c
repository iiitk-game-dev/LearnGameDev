#include <stdio.h>
#include <stdlib.h>
struct node
	{
		int data;
		struct node*link;
	};
struct node*head=NULL;
struct node*temp;
int c=0;
void push(int x)
	{
		temp=(struct node*)malloc(sizeof(struct node));
		if(head==NULL)
			{
                         temp->data=x;
			 temp->link=NULL;
			 head=temp;
			}
		else
			{
				temp->data=x;
				temp->link=head;
				head=temp;
			}
		c++;

	}
void display()
	{
		int n=0;
		head=head->link;
			while(n<c){
			printf("%d",head->data);
			head=head->link;
			n++;
			}
	}
void convert(struct node*mansi)
{
	while(head->link!=NULL)
		head=head->link;
	head->link=mansi;
	
}
int main()
	{
		int x;
		while(1)
		{
		printf("enter the elemnt u wanna enter : ");
		scanf("%d",&x);
		push(x);
		int n;
		printf("no. of nodes : ");
		scanf("%d",&n);
		if(n==0)
		break;
		}
		convert(head);
		display();
return 0;
}
