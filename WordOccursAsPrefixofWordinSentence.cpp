//https://leetcode.com/contest/weekly-contest-190/problems/check-if-a-word-occurs-as-a-prefix-of-any-word-in-a-sentence/
#include <bits/stdc++.h>
class Solution {
public:
    int isPrefixOfWord(string input, string word)
    {
        vector<string> result;
        //boost::split(result, input, boost::is_any_of("\t"));
        input += " ";
        string W = "";
        int count = 0;
        for (int i = 0; i < input.length(); i++)
        {
            if (input[i] == 32)
            {
                if (word.length() > W.length()) {
                    W = "";
                    count++;
                    continue;
                }
                count++;
                if (word == W.substr(0, word.length()))
                    return count;
                W = "";
                //count++;
            }
            else
                W += input[i];
        }

        return -1;
    }
};