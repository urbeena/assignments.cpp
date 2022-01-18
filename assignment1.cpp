#include<iostream>
using namespace std;
int main()
{
	int i, small, large, sum;
	int a[5];
	float average;
	cout<<"enter the elements of array"<<endl;
	for(i = 0; i<5; i++)
	{
		cin>>a[i];
		
		}
		small = a[0];
		large = a[0];
		for ( i = 0; i<5; i++)
		{
			{
				sum = sum + a[i];
			}
			if(a[i]<small)
			{
			small = a[i];
				
			}
			if (a[i] > large)
			{
				large = a[i];
			}
			
		
		}
		
		cout<<"smallest number is"<<small<<endl;
		cout<<"large number is"<<large<<endl;
	    
	    //find average
	    average = (float)sum/5;
	    cout<<"average value is"<<average<<endl;
	    
		
	
	
	return 0;
}
