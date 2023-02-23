
#include<iostream>
using namespace std;
  
int main()
{

	cout<<"\n Enter the elements \n";

	int x[2][3],row=2,col=3;
	for(int i = 0; i < row; i++){
	    for(int j = 0; j < col; j++){
	        cin >> x[i][j];
	    }
	}
	cout<<"\n the elements \n";
	for(int i = 0; i < row; i++){
	    for(int j = 0; j < col; j++){
	        cout<< x[i][j]<<"\t";
	    }
	    cout<<endl;
	}
	
	cout<<"\n addresses the elements \n";
	for(int i = 0; i < row; i++){
	    for(int j = 0; j < col; j++){
	        cout<< &x[i][j]<<"\t";
	    }
	    cout<<endl;
	}
}
