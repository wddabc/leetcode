/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol2.cpp
* Purpose : hash map look up with O(1), for each numbers[i]. Store mp[target-number[i]] = i. Then if the following number meets the requirement, the look up will success 
* Creation Date : 24-01-2014
* Last Modified : Fri Jan 24 22:10:20 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    vector<int> twoSum(vector<int> &numbers, int target) {
        unordered_map<int, int> mp;
        vector<int> res;
        for(int i = 0; i < numbers.size(); ++ i){
            unordered_map<int, int>::iterator itr = mp.find(numbers[i]);
            if(itr == mp.end())
                mp[target-numbers[i]] = i;
            else{
                res.push_back(itr->second+1);
                res.push_back(i+1);
                return res;
            }
        }
        return res;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
