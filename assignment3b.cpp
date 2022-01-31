#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the value of ritcher scale number"<<endl;
	cin>>n;
	if(n<=5.0)
	{
		cout<<"little or no damage"<<endl;
	}
	else if(n>=  5.0 && n<= 5.5)
	{
		cout<<"5 some damage"<<endl;
	}
	else if(n>=5.5 && n<=6.5)
	{
		cout<<"serious damage:  walls may crack or  fall"<<endl;
	}
	else if(n>= 6.5 && n<=7.5)
	{
		cout<<"disaster:  houses and buildings may collapse"<<endl;
	}
	else if(n> 7.5)
	{
		cout<<"catastrophe: most building destroyed"<<endl;
	}
	
	return 0;
}
