//https://leetcode.com/contest/biweekly-contest-23/problems/count-largest-group/
class Solution {
public:
    int sum(int n)
    {
        int sum = 0;
        while (n != 0)
        {
            int d = n % 10;
            sum += d;
            n /= 10;
        }
        return sum;
    }
    int countLargestGroup(int m)
    {
        int a[40] = {0};
        for (int i = 1; i <= m; i++)
        {
            a[sum(i)]++;

        }
        int max = 0;
        int n = 0;
        for (int i = 0; i < 37; i++)
        {
            cout << a[i] << ' ';
            if (a[i] == max)
            {
                n++;
            }
            if (a[i] > max)
            {
                n = 1;
                max = a[i];
            }
        }
        return n;
    }
};