//https://leetcode.com/contest/weekly-contest-191/problems/maximum-area-of-a-piece-of-cake-after-horizontal-and-vertical-cuts/
class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontal, vector<int>& vertical)
    {
        long long m = 1000000007;
        sort(horizontal.begin(), horizontal.end());
        sort(vertical.begin(), vertical.end());

        long long maxh = h - horizontal[horizontal.size() - 1], maxv = w - vertical[vertical.size() - 1];
        int prev = 0;
        for (int i = 0; i < horizontal.size(); i++)
        {
            //cout<<horizontal[i]<<' ';
            if (horizontal[i] - prev > maxh)
            {
                maxh = horizontal[i] - prev;
            }
            prev = horizontal[i];
        }
        //cout<<endl;
        prev = 0;
        for (int i = 0; i < vertical.size(); i++)
        {
            //cout<<vertical[i]<<' ';
            if (vertical[i] - prev > maxv)
            {
                maxv = vertical[i] - prev;
            }
            prev = vertical[i];
        }
        //cout<<endl;
        maxh = maxh % m;
        maxv %= m;
        long long ret = ((maxh * maxv) % m);
        return ret;
    }
};