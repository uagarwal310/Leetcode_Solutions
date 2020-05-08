//https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3317/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numJewelsInStones(string J, string S)
    {
        unordered_map<char, int> jewels;
        for (int i = 0; i < J.length(); i++)
        {
            jewels[J[i]] = 1;
        }
        int count = 0;
        for (int i = 0; i < S.length(); i++)
        {
            if (jewels[S[i]] == 1)
                count++;
        }
        return count;
    }
};