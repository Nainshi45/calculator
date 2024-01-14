#include<iostream>
#include<vector>
using namespace std;
int rain_water_trap(int v[])
{
	int b[]=new int[6];
	
	int c[]=new int[6];
	b[0]=v[0];
	for(int i=0;i<6;i++)
	{
		b[i]=max(b[i-1],v[i]);
	}
	for(int i=0;i<6;i++)
	{
		cout<<b[i];
	}
	c[6-1]=v[6-1];
	for(int i=6-2;i>=0;i++)
	{
		c[i]=max(c[i+1],v[i]);
	}
	for(int i=0;i<6;i++)
	{
		cout<<c[i];
	}
	
	int ans=0;
	for(int i=0;i<6;i++)
	{
		ans+=(min(b[i],c[i])-v[i]);
	}
	cout<<ans;
	return ans;
}
int max(int a, int b)
{
	if(a>b)
	{
	
	return a;
}
}
int min(int a, int b)
{
	if(a>b)
	{
	
	return b;
}
}

int main()
{
	
	int v[6]={4,2,0,3,2,5};
	
		cout<<" stored rain  water is :"<<endl<<rain_water_trap(v);
}