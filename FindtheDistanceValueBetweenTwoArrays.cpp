//https://leetcode.com/contest/biweekly-contest-22/problems/find-the-distance-value-between-two-arrays/
#include<vector>
#include<cstdlib>
class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d)
    {
        //cout<<min<<" "<<max<<endl;
        int distance = 0;
        for (auto i = arr1.begin(); i != arr1.end(); i++)
        {
            int flag = 1;
            for (auto j = arr2.begin(); j != arr2.end(); j++)
            {
                if (abs(*j - *i) <= d)
                {
                    flag = 0;
                    break;
                }
            }
            if (flag == 1)
                distance++;
        }
        cout << endl;
        return distance;
    }
};