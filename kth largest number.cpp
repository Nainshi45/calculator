#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void largest(vector<int> v)
{
	sort(v.begin(),v.end());
	
	int k=2;


int i=v.size();
while(i>v.size()-k)
{
	i--;
	}	
	 	
cout<<k<<"th largest numner is :"<<endl<<v[i];
}
int main()
{
	vector<int> b={3,2,1,5,6,4};
	largest(b);
	return 0;
	
}
/*
2th largest numner is :
5*/