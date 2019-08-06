#include<bits/stdc++.h>

using namespace std;

	
struct point{
	int x;
	int y;
	};


struct node{
	struct point p;
	struct node* ptr;
};
node* top;


void AddFirst(int x,int y)
{
    node* temp=(node*)(malloc(sizeof(node)));
    temp->p.x=x;
    temp->p.y=y;
    temp->ptr=top;
    top=temp;
    return;
}

void DelFirst()
{
    if(top==NULL)
    {
        cout<<-1<<'\n';;
    }
    else
    {
        node* temp=(top->ptr);
        free(top);
        top=temp;
        cout<<0<<'\n';
    }
    return;
}

void Del(int x,int y)
{
    node * it=top;
    node * pr=NULL;
    while(it!=NULL)
    {
        if(it->p.x==x&&it->p.y==y)
        {
            if(pr!=NULL)
            {
                pr->ptr=it->ptr;
            }
            else
            {
                top=it->ptr;
            }
            free(it);
            cout<<0<<'\n';
            return;
        }
        else
        {
            pr=it;
            it=it->ptr;
        }
    }
    cout<<-1<<'\n';
    return;
}

void Search(double d)
{
    d*=d;
    node * it=top;
    while(it!=NULL)
    {
        if(it->p.x*it->p.x+it->p.y*it->p.y<=d)
        {
            cout<<'('<<it->p.x<<','<<it->p.y<<')';
        }
        it=it->ptr;
    }
    cout<<'\n';
    return;
}

void Search(int x,int y)
{
    node * it=top;
    while(it!=NULL)
    {
        if(it->p.x==x&&it->p.y==y)
        {
            cout<<"True"<<'\n';
            return;
        }
        else
        {
            it=it->ptr;
        }
    }
    cout<<"False"<<'\n';
    return;
}

void Length()
{
    int cntr=0;
    node * it=top;
    while(it!=NULL)
    {
        cntr++;
        it=it->ptr;
    }
    cout<<cntr<<'\n';
    return;
}

int main()
{
    top=NULL;
    int t;
    cin>>t;
    while(t--)
    {
        int r;
        cin>>r;
         int x,y;
        double ds;
        switch(r)
        {
            case 1:
                cin>>x>>y;
                AddFirst(x,y);
                break;
            case 2:
                DelFirst();
                break;
            case 3:
                cin>>x>>y;
                Del(x,y);
                break;
            case 4:
                cin>>ds;
                Search(ds);
                break;
            case 5:
                cin>>x>>y;
                Search(x,y);
                break;
            case 6:
                Length();
                break;
            default:
                break;
        }
    }
    return 0;
}

















