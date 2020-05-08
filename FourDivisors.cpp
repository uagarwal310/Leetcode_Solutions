//https://leetcode.com/contest/weekly-contest-181/problems/four-divisors/
#include<cmath>
class Solution
{
public:
    int divisorSum(int num)
    {
        int sum = 1 + num;
        int count = 2;
        if (num < 6)
        {
            cout << num << endl;
            return 0;
        }
        if (num % 2 == 0)
        {
            count = 4;
            sum += 2 + (num / 2);
        }
        for (int i = 3; i <= (int)sqrt(num); i++)
        {
            if (num % i == 0)
            {
                if (num / i == i)
                {
                    count++;
                    sum += i;
                }
                else
                {
                    count += 2;
                    sum += i + (num / i);
                }
            }
            if (count > 4)
            {
                cout << num << endl;
                return 0;
            }
        }
        if (count == 4)
        {
            cout << num << " " << sum << endl;
            return sum;
        }
        cout << "-" << num << endl;
        return 0;
    }
    int sumFourDivisors(vector<int>& nums)
    {
        int sum = 0;
        for (auto i = nums.begin(); i != nums.end(); i++)
            sum += divisorSum(*i);
        return sum;
    }
};