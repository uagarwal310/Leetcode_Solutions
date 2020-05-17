//https://leetcode.com/contest/weekly-contest-189/problems/rearrange-words-in-a-sentence/
#include<bits/stdc++.h>
class Solution {
public:
    string arrangeWords(string text)
    {
        unordered_map<int, vector<string>> ans;
        string word = "";
        transform(text.begin(), text.end(), text.begin(), ::tolower);
        int len = text.length();
        text.push_back(' ');
        int maxlen = 0;
        for (int i = 0; i < len; i++)
        {
            if (text[i] == 32)
            {
                ans[word.length()].push_back(word);

                if (word.length() > maxlen)
                    maxlen = word.length();
                word = "";
            }
            else {
                word.push_back(text[i]);
            }
        }
        //cout<<word;
        ans[word.length()].push_back(word);
        if (word.length() > maxlen)
            maxlen = word.length();
        int count = 0;
        string ans2 = "";
        for (int i = 0; i < ans[2].size(); i++)
            cout << ans[2][i];
        cout << maxlen;
        for (int i = 1; i <= maxlen; i++)
        {
            for (int j = 0; j < ans[i].size(); j++)
            {
                if (i == maxlen && j == ans[i].size())
                    ans2 += ans[i][j];
                else
                    ans2 += ans[i][j] + " ";
                //ans2
            }
        }
        ans2 = ans2.substr(0, ans2.length() - 1);
        ans2[0] = ans2[0] + 'A' - 'a';
        return ans2;
    }
};