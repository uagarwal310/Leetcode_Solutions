//https://leetcode.com/problems/divisor-game/
#include<cmath>
class DevisiorGame {
public:
    bool divisorGame(int N) 
    {
        //0 means player Wins
        //1 means opposition Wins
        /*vector <int> g1;*/
        int g1[N+1];
        /*g1.push_back(1);
        g1.push_back(0);*/
        g1[0]=1;
        g1[1]=1;
        //auto k=g1.begin();
        for(int i=2;i<=N;i++)
        {
            int judge=1;
            for(int j=1;j<=sqrt(N);j++)
            {
                if(i%j==0)
                {
                    if(g1[i-j]==1)
                    {
                        judge=0;
                        j=N;
                    }
                }
            }
            g1[i]=judge;
        }
        if(g1[N]==0)
            return true;
        return false;
    }
};