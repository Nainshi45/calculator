#include<iostream>
using namespace std;
int subarray(int size , int arr[])
{
	int max_sum=0,cur_sum=0;
	 for(int i=0;i<size;i++)
	 {
	 	cur_sum=cur_sum+arr[i];
	 	if(max_sum<cur_sum)
	 	{
	 		max_sum=cur_sum;
		 }
		 if(cur_sum<0)
		 {
		 	cur_sum=0;
		 	
		 }
	 }
	 return max_sum;
}
int main()
{
	int size;
	cout<<" Enter size of array:";
	cin>>size;
	int arr[size];
	cout<<" Enter elements in an array:";
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
		
	}
  
  cout<<" array is :";
  for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
		
	}
  	
  	cout<<endl<<" Largest sum is:"<<subarray(size,arr);
  	
	return 0;
}

/*
 Enter size of array:7
 Enter elements in an array:9
-6
-7
5
-5
13
5
 array is :9 -6 -7 5 -5 13 5
 Largest sum is:18
 */
 
 // time complexity : O(n)