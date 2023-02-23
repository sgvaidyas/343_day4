#include<iostream>
using namespace std;
void swap(int *x,int *y)
{
	int temp = *x;
	*x=*y;
	*y=temp;
	cout<<"SWAP  a = "<<x<<" b = "<<y<<endl;
	cout<<"SWAP  *a = "<<*x<<" *b = "<<*y<<endl;
	cout<<"SWAP  &a = "<<&x<<" &b = "<<&y<<endl;
}
int main()
{
	int a=10,b=20;
	
	cout<<"MAIN (before) a = "<<a<<" b = "<<b<<endl;
	cout<<"MAIN  &a = "<<&a<<" &b = "<<&b<<endl;
	swap(&a,&b);
	cout<<"MAIN (after) a = "<<a<<" b = "<<b<<endl;	
}
