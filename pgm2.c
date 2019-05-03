#include<stdio.h>
#include<stdlib.h>
struct node
	{
		int data;
		struct node*next;
		struct node*prev;
	};
struct node*head=NULL;
struct node*temp;
void  push(int x)
	{
		temp=(struct node*)malloc(sizeof(struct node));
		if(head
		temp->data=x;
		temp->next=NULL;
		temp->prev=NULL;


