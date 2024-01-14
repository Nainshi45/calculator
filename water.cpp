#include<iostream>
#include<algorithm>
using namespace std;
int water_container(int arr[],int n)
{
	int l=0,r=n-1,ma=0;
	while(l<r)
	{
		int lh=arr[l],rh=arr[r];
		int min_h=min(lh,rh);
		
		int len=r-l;
		int current_area=min_h*len;
		ma=max(ma,current_area);
		if(lh<rh)
		{
			l++;
		 } 
		 else
		 {
		 	r--;
		 }
	}
	return ma;
}
int main()
{
	int arr[]={1,8,6,2,5,4,8,3,7};
   // int arr[]={1,1};	
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<" maximum water contained is:"<<water_container(arr,n);
	return 0;
}
// maximum water contained is:49