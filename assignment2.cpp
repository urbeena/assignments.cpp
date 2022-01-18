#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float average, sd, sum =0,  v =0,  variance =0 ;
	int a[100], i, n;
	cout<<"enter the size of array"<<endl;
	cin>>n;
  
    cout<<"enter the elements of array"<<endl;
	for(i = 0; i<n; i++)
	{
		cin>>a[i];
		
		}
			for ( i = 0; i<n; i++)
		{
			{
				sum = sum + a[i];
			}
		}
		 //find average
	    average = (float)sum/n;
	    
	    // variance calculation variance = (variance+(a[i]-average,2))/n;
	    for(i = 0;i <n; i++)
	    {
	    	
	    	v = (v + pow(a[i] - average,2));  
			variance = v/n;  
		}
		//standard deviation
		sd= sqrt(variance);
		cout<<"average is"<< average <<endl;
		cout<<"variance is"<< variance<<endl;
		cout<<"standard deviation is"<<sd<<endl;
		return 0;
	
}

