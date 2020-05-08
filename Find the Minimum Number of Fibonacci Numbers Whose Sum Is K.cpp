//https://leetcode.com/contest/biweekly-contest-24/problems/find-the-minimum-number-of-fibonacci-numbers-whose-sum-is-k/
#include<vector>
#include<algorithm>
class Solution
{
public:
    int findMin(vector<int> a, int k)
    {
        int min = k;
        if (k < 1)
            return -1;
        if (binary_search(a.begin(), a.end(), k))
            return 1;
        for (int i = a.size() - 1; i >= 0; i--)
        {
            if (a[i] > k)
                continue;
            if (a[i] == k)
                return 1;
            int c = findMin(a, k - a[i]);
            if (c < 0)
                continue;
            int b = 1 + c;
            if (b == 2)
                return 2;
            if (b < min)
                min = b;
        }
        return min;
    }
    int findMinFibonacciNumbers(int k)
    {
        vector<int> ans;
        int a = 1;
        int b = 1;
        ans.push_back(1);
        ans.push_back(1);
        int c = 2;
        while (c <= k)
        {
            ans.push_back(c);
            a = b;
            b = c;
            c = a + b;
            if (c == k)
                return 1;
        }
        int count = 0, j = ans.size() - 1;
        while (k > 0)
        {
            count += (k / ans[j]);
            k %= (ans[j]);
            j--;
        }
        return count;
    }
};