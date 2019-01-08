#include<stdio.h>
#include<stdlib.h>

struct node
{
	int coeff;
	struct  node *next;
};
struct node* create(struct node*,int);
void display(struct node*,int);

main()
{
	struct node *p1=NULL,*p2=NULL,*p3,*p4;
	int m,n;
	printf("enter size of m n");
	scanf("%d%d",&m,&n);
	p1=create(p1,m);
	p2=create(p2,n);
	display(p1,m);
	display(p2,n); 
}

struct node* create(struct node *p,int m)
{
	int i;
	struct node *temp=p;
	for(i=m;i>=0;i--)
	{
		struct node *newnode=(struct node*)malloc(sizeof(struct node));
		newnode->next=NULL;
		printf("enter coeff of x^%d",i);
		scanf("%d",&newnode->coeff);
		if(p==NULL)
		{
			p=newnode;
			temp=newnode;
		}
		else
		{
			temp->next=newnode;
			temp=newnode;
		}
	}
	return p;
}

void display(struct node *p,int m)
{
	struct node *t=p;
	while(t!=NULL)
	{
		printf("%d %d",t->coeff,m);
		m--;
		t=t->next;
	}printf("\n");
}

