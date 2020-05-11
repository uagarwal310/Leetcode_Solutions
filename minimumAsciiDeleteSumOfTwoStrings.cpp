//https://leetcode.com/problems/minimum-ascii-delete-sum-for-two-strings/submissions/
#include<bits/stdc++.h>
class Solution {
public:
    int minimumDeleteSum(string s1, string s2)
    {
        int len1 = s1.length() + 1;
        int len2 = s2.length() + 1;
        int arr[len1 + 1][len2 + 1];
        arr[0][0] = 0;
        for (int i = 1; i < len1; i++)
            arr[i][0] = arr[i - 1][0] + s1[i - 1];
        for (int i = 1; i < len2; i++)
            arr[0][i] = arr[0][i - 1] + s2[i - 1];
        for (int i = 1; i < len1; i++)
        {
            for (int j = 1; j < len2; j++)
            {
                if (s1[i - 1] == s2[j - 1])
                    arr[i][j] = arr[i - 1][j - 1];
                else
                    arr[i][j] = min(arr[i][j - 1] + s2[j - 1], arr[i - 1][j] + s1[i - 1]);
            }
        }
        return arr[len1 - 1][len2 - 1];
    }
};