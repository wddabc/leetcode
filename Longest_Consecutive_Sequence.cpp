/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Longest_Consecutive_Sequence.cpp
* Purpose :
* Creation Date : 20-01-2014
* Last Modified : Mon Jan 20 21:34:25 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    int longestConsecutive(vector<int> &num) {
        unordered_map<int, bool> dict;
        for(int i = 0; i < num.size(); ++ i)
            dict[num[i]] = true;
        int res = 0;
        for(int i = 0; i < num.size(); ++ i){
            int cnt = 0;
            if(dict[num[i]]){
                cnt++;
                int tmp = num[i]+1;
                while(dict[tmp]) {
                    dict[tmp++] = false;
                    cnt++;
                }
                tmp = num[i]-1;
                while(dict[tmp]) {
                    dict[tmp--] = false;
                    cnt++;
                }
            }
            if(cnt > res) res = cnt;
        }
        return res;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
