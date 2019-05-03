#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node* lchild;
	struct node* rchild;
};
struct node* newnode(int x)
{
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=x;
	temp->lchild=NULL;
	temp->rchild=NULL;
	return(temp);
}
void inorder(struct node *t)
{
	if(t==NULL)
	return;
	inorder(t->lchild);
	printf("%d",t->data);
	inorder(t->rchild);
}
int main()
{
	struct node* root=newnode(1);
	root->lchild=newnode(2);
	root->lchild->lchild=newnode(4);
	root->lchild->rchild=newnode(6);
	root->rchild=newnode(3);
	root->rchild->rchild=newnode(5);
	printf("inorder of the tree is : ");
	inorder(root);
return 0;
}
