//https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3318/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    Solution()
    {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }
    bool canConstruct(string ransomNote, string magazine)
    {
        unordered_map<char, int> check;
        for (int i = 0; i < magazine.length(); i++)
        {
            check[magazine[i]]++;
            cout << magazine[i];
        }
        for (int j = 0; j < ransomNote.length(); j++)
        {
            if (check[ransomNote[j]] >= 1)
            {
                check[ransomNote[j]]--;
                continue;
            }
            return false;
        }
        return true;
    }
};