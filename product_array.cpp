 
/* Calculate preffixstartproduct and prefixendproduct*/
#include<iostream>
using namespace std;
int* product_array(int arr[],int n)
{
	int prestart[n],preend[n];
	
	for(int i=0;i<n;i++)
	{
		prestart[i]=1;
		for(int j=0;j<=i;j++)
		{ 
		      //1,2,6,24
			prestart[i]=prestart[i]*arr[j];
		
		}
	}
	
	for(int i=0;i<n;i++)
	{
		//24,24,12,8
		preend[i]=1;
		for(int j=i;j<n;j++)
		{
			preend[i]=preend[i]*arr[j];
		}
	}
	arr[0]=preend[1];
	for(int i=1;i<n;i++)
	{
		arr[i]=prestart[i-1]*preend[i+1];
	
		
	}
	return arr;

}
int main()
{
	int arr[5]={-1,1,0,-3,3};
	int n=sizeof(arr)/sizeof(arr[0]);
	product_array(arr, n);
	cout<<" updated elements:";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
}
	return 0;

}
//updated elements:0 0 9 0 0