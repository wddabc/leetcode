/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Two_Sum.cpp
* Purpose :
* Creation Date : 24-01-2014
* Last Modified : Fri Jan 24 00:20:39 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    struct sort_pred {
        bool operator()(const pair<int,int> &p1, const std::pair<int,int> &p2) {
            return p1.first < p2.first;
        }
    };
    vector<int> twoSum(vector<int> &numbers, int target) {
        vector<pair<int,int> >num2idx;
        for (int i = 0; i < numbers.size(); ++ i)num2idx.push_back(make_pair(numbers[i], i+1));
        sort(num2idx.begin(), num2idx.end(), sort_pred());
        int start = 0, end = num2idx.size() - 1;
        int sum  = 0;  
        while(start < end)
        {   
            sum = num2idx[start].first + num2idx[end].first;
            if(sum < target) start ++;
            else if(sum > target) end --; 
            else break;
        }   
        vector<int> res;
        res.push_back(num2idx[start].second);
        res.push_back(num2idx[end].second);
        sort(res.begin(), res.end());
        return res;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
