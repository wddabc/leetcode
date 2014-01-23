/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Best_Time_to_Buy_and_Sell_Stock.cpp
* Purpose :
* Creation Date : 20-01-2014
* Last Modified : Mon Jan 20 00:17:37 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    int maxProfit(vector<int> &prices) {
        int profit = 0, min_price = INT_MAX;
        for(int i = 0; i < prices.size(); ++ i){
            if(prices[i] < min_price) min_price = prices[i];
            int tp = prices[i] - min_price;
            if(tp > profit) profit = tp;
        }
        return profit;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
