//https://leetcode.com/contest/weekly-contest-184/problems/html-entity-parser/
class Solution {
public:
    string entityParser(string text)
    {
        unordered_map<string , char> aa;
        aa["&quot"] = '\"';
        aa["&apos"] = '\'';
        aa["&amp"] = '&';
        aa["&gt"] = '>';
        aa["&lt"] = '<';
        aa["&frasl"] = '/';
        string s = "";
        for (int i = 0; i < text.length(); i++)
        {
            char ch = text[i];
            char ch2 = '\0';
            string s1 = "";
            int copy = i;
            if (text[i] == '&')
            {
                for (int j = 0; j < 6; j++, i++)
                {
                    s1 += text[i];
                    if (aa.count(s1) > 0)
                    {
                        ch2 = aa[s1];
                        break;
                    }
                }
                if (ch2 == '\0')
                {
                    i = copy;
                    s += ch;
                }
                else
                {
                    s += ch2;
                    i++;
                }
            }
            else
                s += ch;
        }
        return s;
    }
};