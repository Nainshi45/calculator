
//STL IN C++
#include<iostream>
#include<vector>
using namespace std;
int maxprofit(vector <int> v)
{
int minsofar=v[0],maxprofit=0,profit;
for(int i=0;i<v.size();i++)
{
	minsofar=min(minsofar,v[i]);
	profit=v[i]-minsofar;
	maxprofit=max(maxprofit,profit);
	
		}	
		return maxprofit;
}
int min(int a,int b)
{
	if(a>b)
	
		return b;
	
	
}
int max(int a,int b)
{
	if(a>b)
	
		return a;
	
}
int main()
{
 vector<int> v={7,1,5,3,6,4};
	cout<<" maximum profit will be:"<<maxprofit(v);
	return 0;
	
}
//maximum profit will be:5