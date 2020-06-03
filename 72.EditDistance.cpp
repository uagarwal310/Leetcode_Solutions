class Solution {
public:
    int minDistance(string word1, string word2)
    {
        int len1 = word1.length(), len2 = word2.length();
        int aa[len1 + 1][len2 + 1];
        aa[0][0] = 0;
        for (int i = 1; i <= len1; i++)
            aa[i][0] = i;
        for (int i = 1; i <= len2; i++)
            aa[0][i] = i;
        for (int i = 1; i <= len1; i++)
        {
            for (int j = 1; j <= len2; j++)
            {
                //cout<<word1[i-1]<<" "<<word2[j-1]<<' '<<i<<' '<<j<<' ';
                if (word1[i - 1] == word2[j - 1])
                    aa[i][j] = aa[i - 1][j - 1];
                else
                {
                    aa[i][j] = 1 + min(min(aa[i - 1][j], aa[i][j - 1]), aa[i - 1][j - 1]);
                }
                //cout<<aa[i-1][j]<<' '<<aa[i][j-1]<<' '<<aa[i-1][j-1]<<' ';
                //cout<<aa[i][j]<<endl;
            }
        }
        /*for(int i=0;i<=len1;i++)
        {
            for(int j=0;j<=len2;j++)
            {
               cout<<aa[i][j]<<" ";
            }
            cout<<endl;
        }*/
        return aa[len1][len2];
    }
};