//https://leetcode.com/problems/counting-bits/
class CountingBits
{
public:
    vector<int> countBits(int c) 
    {
        vector<int> count;
        count.push_back(0);
        for(int i=1;i<=c;i++)
        {
            int a=i%2;
            auto j=count.begin();
            count.push_back(a+j[i/2]);
        }
        return count;
    }
};