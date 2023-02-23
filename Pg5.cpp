#include<iostream>
using namespace std;


int main(){
	char a[100];
	cout<<"Enter the string: "<<endl;
	gets(a);

	int i,j;
	int len =0;
	for(i=0;a[i]!='\0';len++,i++);
	
	cout<<"\n Length = "<<len<<endl;
		
	
	cout<<"len = "<<len;
	i=0;
	while(i<len-1)
	{
		if((a[i]== ' ' && a[i+1]==' ') || (i==0 && a[i]==' '))
		{
			for(j=i;j<len;j++)
				a[j]=a[j+1];
			
			len--;				
		}
		else
			i++;
	}
	
	cout<<"\nString with whitespaces removed:" << a << endl;
	return 0;
}
