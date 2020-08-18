//https://leetcode.com/problems/count-primes/
class Solution {
public:
    int countPrimes(int n)
    {
        int m = (int)sqrt(n);
        vector<int> num(n + 1, 1);
        if (n <= 2)
            return 0;
        int count = 1;
        for (int i = 2; i <= m; i++)
        {
            if (num[i] == 1)
            {
                int ic = i * 2;
                while (ic < n)
                {
                    if (num[ic] == 1)
                        count++;
                    num[ic] = 0;
                    ic += i;
                }
            }
        }
        return n - 1 - count;
    }
};