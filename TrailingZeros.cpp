//https://leetcode.com/problems/factorial-trailing-zeroes/submissions/
class Solution {
public:
    int trailingZeroes(int n) 
    {
        long long a = 5, ans = 0;
        while(n/a) {
            ans += n/a;
            a *= 5;
        }
        return ans;
    }
};