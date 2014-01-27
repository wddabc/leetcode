/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : 3Sum.cpp
* Purpose : Sort first. Then fix one and scan the others. O(n^2)
* Creation Date : 03-01-2014
* Last Modified : Sun Jan 26 19:51:42 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    vector<vector<int> > threeSum(vector<int> &num) {
        // Note: The Solution object is instantiated only once and is reused by each test case.
        vector<vector<int> > res;
        sort(num.begin(), num.end());
        for (int i = 0; i < num.size(); ++ i){
            if (i > 0 && num[i] == num[i - 1]) continue;
            int l = i + 1, r = num.size()-1;
            while(l < r){
                int sum = num[i] + num[l] + num[r];
                if(l > i + 1 && num[l] == num[l - 1]){l ++; continue;}
                if(r <num.size()-1 && num[r] == num[r + 1]){r --; continue;}
                if (sum < 0) l ++;
                else if (sum > 0) r --;
                else {
                    vector<int> tmp;
                    tmp.push_back(num[i]);
                    tmp.push_back(num[l]);
                    tmp.push_back(num[r]);
                    res.push_back(tmp);
                    l ++;
                    r --;
                }
            }
        }
        return res;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
