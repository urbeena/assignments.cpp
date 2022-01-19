#include<iostream>
using namespace std;
#define SIZE 5
int main()
{
	int temp, i ;
	int hot = 0,pleasent =0, cold =0;
	
	for( i =0; i< SIZE; i++)
	{
	cout<<"enter the  temperature"<<endl;
	cin>>temp; 
	
	if(temp >=85)
	
	{
		cout<<"is a hot day"<<temp<<endl;
		++hot;
		
	}
	else if(temp >=60 && temp <=84)
	{
		cout<<" is a pleasent day"<<temp<<endl;
		++pleasent;
		
	}
	else
	{
		cout<<"is a cold day"<<temp<<endl;
		++cold;
	}
}

cout<<"the collection of hot days is"<<hot<<endl;
cout<<"the collection of pleasent days is"<<pleasent<<endl;
cout<<"the collection of cold days is"<<cold<<endl;

	return 0;
}
