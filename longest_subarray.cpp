// find the longest subarray in an array return no of element 
#include<iostream>
#include<algorithm>
using namespace std;
int longest_subarray(int arr[],int n,int k)
{
	//sort the array
	//sort(arr,arr+n);
	int max_count=0;
    
    for(int i=0;i<n;i++)
    { int sum=0,count=1; 
	int j=i+1;
    sum=arr[i];
    while(j<n)
    {   count++;
    	sum=sum+arr[j];
    	if(sum%k==0)
    {
    	if(count>max_count)
    	{
		max_count=count;
		}
		
   }
		j++;
    	
	}
	
    	
	}
	return max_count;
}
int main()
{
	//int arr[]={2,7,6,1,4,5},k=3;
	int arr[]={-2,2,-5,12,-11,-1,7},k=3;
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<" longest subarray element:"<<longest_subarray(arr, n, k);
return 0;
}