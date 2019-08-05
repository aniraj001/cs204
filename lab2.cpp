#include<bits/stdc++.h>

using namespace std;

	
struct point{
	int x;
	int y;
	};


struct node{
	struct point p;
	struct node* next;
};

void addfirst(x,y,head)
{
	if(head!=NULL)
	{
	node *newnode = new node;
	newnode->p.x=x;
	newnode->p.y=y;
	newnode->next=head;
	head = newnode;
   }

   else {
	node *newnode = new node;
	newnode->p.x=x;
	newnode->p.y=y;
	newnode->next=NULL;
	head = newnode;
     }


}

void delfirst(head)
{
	if(head==NULL)
	  cout<<"-1";

	node *delnode=head;
	head=head->next;
	delete delnode;
}

del(x,y,head)
{
	node *current =head;
	node *prev= nullptr;
	while(current!=nullptr)
	{
		
	}
}
















}












