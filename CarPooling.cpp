//https://leetcode.com/explore/challenge/card/september-leetcoding-challenge/556/week-3-september-15th-september-21st/3467/
class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<int> dp(1000);
        for (int i=0; i<trips.size(); i++) 
        {
            dp[trips[i][1]] += trips[i][0];
            dp[trips[i][2]] -= trips[i][0];
        }
        for (auto stop : dp) 
        {
            capacity -= stop;
            if (capacity < 0)
                return false;
        }
        return true;
    }
};