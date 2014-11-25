/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 25-11-2014
* Last Modified : Tue Nov 25 00:50:09 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    vector<vector<int> > fourSum(vector<int> &num, int target) {
        sort(num.begin(), num.end());
        vector<vector<int> > res;
        for (int i = 0; i < num.size(); ++ i){
            if (i > 0 && num[i] == num[i - 1]) continue;
            for (int j = i + 1; j < num.size(); ++ j){
                if(j > i + 1 && num[j] == num[j - 1]) continue;
                int l = j + 1, r = num.size() - 1;
                while(l < r){
                    if (l > j + 1 && num[l] == num[l - 1]){l ++; continue;}
                    if (r < num.size() - 1 && num[r] == num[r+1]){r --; continue;}
                    int sum = num[i] + num[j] + num[l] + num[r];
                    if (sum < target) l ++;
                    else if (sum > target) r --;
                    else{
                        vector<int> tmp;
                        tmp.push_back(num[i]);
                        tmp.push_back(num[j]);
                        tmp.push_back(num[l]);
                        tmp.push_back(num[r]);
                        res.push_back(tmp);
                        l ++;
                        r --;
                    }
                }
            }
        }
            return res;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
