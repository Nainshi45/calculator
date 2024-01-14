// it is valid for distinct elements and duplicated elements
#include<iostream>
using namespace std;
void min_rotatedarray(int arr[],int n)
{
	int s=0,m;
	int e=n-1;
	while(s<e)
	{
		m=s+(e-s)/2;

		if(arr[m]>arr[e])
		{
			s=m+1;
			
		}
		else if(arr[m]<arr[e])
		{
			e=m;
		}
		else
		{
			e--;
			
		}
	}
	cout<<arr[e];
}
int main()
{
	int arr[]={3,4,5,1,2};
	int n=sizeof(arr)/sizeof(arr[0]);
	min_rotatedarray( arr, n);
	return 0;
}