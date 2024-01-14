#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void smallest(vector<int> v)
{
	sort(v.begin(),v.end());
	
	int k=3;


int i=0;
while(i<k)
{
	i++;
	}	
	 	
cout<<k<<"rd"<<" "<<"smallest number is :"<<endl<<v[--i];
}
int main()
{
	vector<int> b={7,10,4,3,20,15};
	smallest(b);
	return 0;
	
}
/*
3rd smallest number is :
7*/