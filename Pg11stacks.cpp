#include<iostream>
#define max 5
using namespace std;

void push();
void pop();
void display();

int a[max],top;

int main()
{
	top=-1;
	int ch;
	do
	{
		cout<<"\n 1 PUSH 2 POP 3 DISPLAY 4 EXIT\n Enter choice = ";
		cin>>ch;
		switch(ch)
		{
			case 1: push();break;
			case 2: pop();break;
			case 3: display();break;
			case 4: break;
		}
	}while(ch!=4);
}

void push()
{
	if(top==max-1)
		cout<<"\n Stack overflow \n";
	else
	{
		int ele;
		cout<<"\n enter the ele = ";
		cin>>ele;
		a[++top]=ele;
	}
}



void pop()
{
	if(top==-1)
		cout<<"\n Stack underflow \n";
	else
	{
		cout<<"\n Deleting  = "<<a[top--]<<endl;
	}
}
void display()
{
	if(top==-1)
		cout<<"\n Stack underflow \n";
	else
	{
		cout<<"\n Stack elements \n";
		for(int i=top;i>=0;i--)
			cout<<a[i]<<endl;

	}
}

