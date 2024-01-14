#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
vector<int> make_biggest_number(vector<int>& v)
{
	int i=0,j=i+1;
	sort(v.begin(),v.end());
	while(i<v.size()-1)
	{
		if(j>v.size())
		{
			i++;
			j=i+1;
		}
		string a=to_string(v[i]),b=to_string(v[j]),c1=a+b,c2=b+a;// conversion from int to string
		//int k1=stoi(c1),k2=stoi(c2);
		if(c2>c1)
		{
			int temp=v[j];
			v[j]=v[i];
			v[i]=temp;
			j++;
		}
		else if(c1>c2)
		{
			j++;
		}
		else
		{
			j++;
		}
	}
	
	
	return v;
}
int main()
{
	vector<int> v={9,0,9};
	vector<int> b;
	b=make_biggest_number(v);
	cout<<" greatest number is:";
	for(int j=0;j<b.size();j++)
	{
		cout<<b[j];
	}
	return 0;

}
// greatest number is:990