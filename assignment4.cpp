#include<iostream>
using namespace std;
#define SIZE 5
int main()
{
	int temp, i ,sum =0;
	int hot = 0,pleasent =0, cold =0;
	double average;
	for( i =0; i< SIZE; i++)
	{
	cout<<"enter the  temperature"<<endl;
	cin>>temp; 
	sum += temp;
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
average = (double) sum/SIZE;
cout<<"the collection of hot days is"<<hot<<endl;
cout<<"the collection of pleasent days is"<<pleasent<<endl;
cout<<"the collection of cold days is"<<cold<<endl;
cout<<"the average temperature is"<<average<<endl;
	return 0;
}
