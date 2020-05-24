//https://leetcode.com/contest/weekly-contest-190/problems/maximum-number-of-vowels-in-a-substring-of-given-length/
class Solution {
public:
    int maxVowels(string s, int k)
    {
        int max = 0, count = 0;
        unordered_map<char, int> aa;
        aa['a'] = 1;
        aa['o'] = 1;
        aa['e'] = 1;
        aa['i'] = 1;
        aa['u'] = 1;
        for (int i = 0; i < k; i++)
        {
            if (aa[s[i]] == 1)
                count++;
        }
        max = count;
        cout << count << ' ';
        for (int i = k; i < s.length(); i++)
        {
            if (i < k)
            {
                if (aa[s[i] == 1])
                {
                    max++; count++;
                }
            }
            else
            {
                if (aa[s[i - k]] == 1)
                    count--;
                if (aa[s[i]] == 1)
                    count++;

                if (count > max)
                    max = count;
            }
            cout << count << ' ';
        }
        cout << endl;
        return max;
    }
};