#include<iostream>
#include<algorithm>
using namespace std;
int subarrayproduct(int arr[],int n)
{   int i;
	int ma=arr[0];
    int mi=arr[0];
	int res=arr[0];
	for(int i=1;i<n;i++)
	{
	int temp1=ma*arr[i];
	int temp2=mi*arr[i];
    ma=max(temp1,temp2);
	ma=max(ma,arr[i]);
	mi=min(temp1,temp2);
	mi=min(mi,arr[i]);
	res=max(res,ma);
}

	return res;
	
	
}

int main()
{   
	 int arr[4]={2,3,-2,4};
	 int n=sizeof(arr)/sizeof(arr[0]);
	 cout<<" product  will be"<<" "<<subarrayproduct(arr, n);
     return 0;
}
//product  will be 6