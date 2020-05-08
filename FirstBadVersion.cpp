//https://leetcode.com/explore/featured/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3316/
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);
#define ll long long
class Solution {
public:
    int firstBadVersion(int n) \
    {
        ll ans = -1;
        ll low = 1;
        ll high = n;
        while (low <= high)
        {
            ll mid = (low + high) / 2;
            if (isBadVersion(mid))
            {
                ans = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return ans;
    }
};