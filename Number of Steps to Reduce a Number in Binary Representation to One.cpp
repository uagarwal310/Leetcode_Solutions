//https://leetcode.com/contest/weekly-contest-183/problems/number-of-steps-to-reduce-a-number-in-binary-representation-to-one/
class Solution {
    public int numSteps(String s)
    {
        if (s.length() == 1 && s.charAt(0) == '1')
            return 0;
        int len = s.length();
        if (s.charAt(len - 1) == '0')
            return 1 + numSteps(s.substring(0, len - 1));
        else
        {
            int i = len - 1;
            int fla = 0;
            while (i >= 0)
            {
                if (s.charAt(i--) == '0')
                {
                    fla = 1;
                    s = s.substring(0, i + 1) + '1' + s.substring(i + 2);
                    break;
                }
            }
            if (fla == 0)
            {
                s = "1";
                for (int j = 0; j < len; j++)
                    s += '0';
            }
            return 1 + numSteps(s);
        }

    }
}