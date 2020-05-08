//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
#include<vector>
class BestTimeToBuyStocks {
public:
    int maxProfit(vector<int>& price) 
    {
        int minprice = 2147483647;
        int maxprofit = 0;
        auto prices=price.begin();
        int size=price.size();
        for (int i = 0; i < size; i++) 
        {
            if (prices[i] < minprice)
                minprice = prices[i];
            else if (prices[i] - minprice > maxprofit)
                maxprofit = prices[i] - minprice;
        }
        return maxprofit;
    }
};