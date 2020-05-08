//https://leetcode.com/contest/biweekly-contest-25/problems/check-if-a-string-can-break-another-string/
class Solution {
public:
    bool checkIfCanBreak(string s1, string s2)
    {
        int num1[26] = {0};
        int num2[26] = {0};
        int n = s1.length();
        for (int i = 0; i < n; i++)
        {
            num1[s1[i] - 'a']++;
            num2[s2[i] - 'a']++;
        }
        string s11 = "", s22 = "";
        for (int i = 0; i < 26; i++)
        {
            while (num1[i] != 0)
            {
                s11 += (i + 'a');
                num1[i]--;
            }
            while (num2[i] != 0)
            {
                s22 += (i + 'a');
                num2[i]--;
            }
        }
        int ini1 = 0, ini2 = 0;
        cout << s11 << ' ' << s22 << endl;
        for (int i = 0; i < n; i++)
        {
            if (s11[i] <= s22[i])
                continue;
            else
            {
                for (int i = 0; i < n; i++)
                {
                    if (s22[i] <= s11[i])
                        continue;
                    return false;
                }
                break;
            }
        }
        return true;
    }
};