#define deb(x) cout<<#x<<' '<<x<<'\n';


#include<bits/stdc++.h>
using namespace std;
template<typename...T>
void read(T&... args)
{
	((cin >> args), ...);
}
template<typename...T>
void write(T &&... args)
{
	((cout << args), ...);
}
class Solution
{
public:
	Solution()
	{
		ios_base::sync_with_stdio(0);
		cin.tie(0);
		cout.tie(0);
	}
};