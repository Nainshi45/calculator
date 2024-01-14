#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int>> merge(vector<vector<int>>& intervals) 
{
    sort(begin(intervals), end(intervals));
    vector<int> curr = intervals[0];
    vector<vector<int>> merged;
    for (auto i=1u; i<intervals.size(); ++i)
    {
        if (curr[1] >= intervals[i][0]) // overlap?
        {
            curr[1] = max(intervals[i][1], curr[1]); // update ending point
        }
        else
        {
            merged.push_back(curr); // "commit" current merged interval
            curr = intervals[i];
        }
    }
    merged.push_back(curr); // last one is not committed yet
    return merged;
}
int main()
{
	vector<vector<int>> v={{1,3},{2,4},{6,8},{9,10}};
	vector<vector<int>> b;
	b=merge(v);
	
	for(int i=0;i<b.size();i++)
	{
		cout<<"{";
		for(int j=0;j<2;j++)
		{
			cout<<b[i][j]<<" ";
		}
		
		cout<<"}"<<endl;
	}
return 0;
}
/*
{1 4 }
{6 8 }
{9 10 }
*/