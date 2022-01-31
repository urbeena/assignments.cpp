#include<iostream>
using namespace std;
int main()
{
	float bmi, wt, ht;
	cout<<"enter the weight  in pounds and height in inches"<<endl;
	cin>>wt>>ht;
	bmi =703 * (wt)/(ht)*2;
	if(bmi <= 18.5)
	{
		cout<<"underwt"<<endl;
	}
	else if(bmi >= 18.5 && bmi <=24.9)
	{
		cout<<"normal"<<endl;
	}
	else if (bmi >= 25.0 && bmi <= 29.9)
	{
		cout<<"overwt"<<endl;
	}
	else if (bmi >=30)
	{
		cout<<"obese"<<endl;
	}
	
	
	
	return 0;
}
