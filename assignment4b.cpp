#include<iostream>
using namespace std;
int main()
{
	float x, y;
	cout<<"enter the value of x and y"<<endl;
	cin>>x>>y;
	if(x>0 && y>0)
	{
		cout<<"point lies in first quadrant"<<endl;
	}
	if(x<0 && y> 0)
	{
		cout<<"point lies in second quadrant"<<endl;
	}
	if( x< 0 && y< 0)
	{
			cout<<"point lies in thrid quadrant"<<endl;
		
	}
	if (x>0 && y< 0 )
	{
		cout<<"point lies in fourth quadrant"<<endl;
	}

	
	
	
	return 0;
}
