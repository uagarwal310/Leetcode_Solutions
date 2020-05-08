/*https://leetcode.com/contest/weekly-contest-186/problems/maximum-points-you-can-obtain-from-cards/*/
#define max(a,b) (a>b)?a:b
class Solution {
public:
    /*int maxScore(vector<int>& c, int k,int start,int end,int count)
    {
        if(count==k)
            return 0;
        return max(c[start]+maxScore(c,k,start+1,end,count+1),c[end]+maxScore(c,k,start,end-1,count+1));
    }*/
    int maxScore(vector<int>& c, int k)
    {
        int len = c.size();
        if (len < k)
            return 0;
        vector<int> f, b;
        int sum = 0;
        f.push_back(0);
        b.push_back(0);
        for (int i = 0; i < len; i++)
        {
            sum += c[i];
            f.push_back(sum);
        }
        sum = 0;
        for (int i = len - 1; i >= 0; i--)
        {
            sum += c[i];
            b.push_back(sum);
        }
        int max = -10000000;
        for (int i = 0; i <= k; i++)
        {
            int ans = f[i] + b[k - i];
            if (ans > max)
                max = ans;
        }
        return max;

    }
};