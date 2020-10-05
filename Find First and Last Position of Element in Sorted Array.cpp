#include<bits/stdc++.h>
using namespace std;
vector<int> searchRange(vector<int>& nums, int target) 
{
    int start=0,end=nums.size()-1;
    while(start<end)
    {
        int mid=(start+end)/2;
        if(nums[mid]==target)
            end=mid;
        else if(nums[mid]>target)
            end=mid-1;
        else
            start=mid+1;
    }
    if(nums[end]!=target)
        return {-1,-1};
    vector<int> ans;
    ans.push_back(end);
    start=end;
    end=nums.size()-1;
    // while(start<end)
    // {
    //     int mid=(start+end)/2;
    //     if(nums[mid]==target)
    //         start=mid;
    //     else if(nums[mid]>target)
    //         end=mid-1;
    //     else
    //         start=mid+1;
    // }
    // ans.push_back(start);
    return ans;
}
int main()
{
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	int target;
	cin>>target;
	cout<<1;
	// v=searchRange(v, target);
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<' ';
	}
}