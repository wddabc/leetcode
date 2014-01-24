/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : 3Sum.cpp
* Purpose :
* Creation Date : 03-01-2014
* Last Modified : Fri Jan  3 20:22:39 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    struct comp_vec {
        bool operator()(const vector<int> &v1, const vector<int> &v2) {
            for(int i = 0; i < v1.size(); ++ i) if (v1[i] < v2[i]) return true;
            return false;
        }
    };
    vector<vector<int> > threeSum(vector<int> &num) {
        // Note: The Solution object is instantiated only once and is reused by each test case.
        set<vector<int>, comp_vec> res_s;
        set<int> s(num.begin(), num.end());
        for (int i = 0; i < num.size(); ++ i)
            for (int j = i + 1; j < num.size(); ++ j){
                int cur = -num[i] - num[j];
                if (s.find(cur) != s.end())
                {
                    vector<int> tmp;
                    tmp.push_back(num[i]);
                    tmp.push_back(num[j]);
                    tmp.push_back(cur);
                    sort(tmp.begin(), tmp.end());
                    res_s.insert(tmp);
                }
            }
        vector<vector<int> >res;
        for (set<vector<int> >::iterator itr = res_s.begin(); itr != res_s.end(); ++ itr)
            res.push_back(*itr);
        return res;
    }
        // Note: The Solution object is instantiated only once and is reused by each test case.
        set<vector<int> > res_s;
        sort(num.begin(), num.end());
        for (int i = 0; i < num.size(); ++ i){
            int l = i + 1, r = num.size()-1;
            while(l < r){
                int sum = num[l] + num[i] + num[r];
                if (sum < 0) l ++;
                else if (sum > 0) r --;
                else {
                    vector<int> tmp;
                    tmp.push_back(num[i]);
                    tmp.push_back(num[l]);
                    tmp.push_back(num[r]);
                    res_s.insert(tmp);
                    l ++;
                    r --;
                }
            }
        }
        vector<vector<int> >res;
        for (set<vector<int> >::iterator itr = res_s.begin(); itr != res_s.end(); ++ itr)
            res.push_back(*itr);
        return res;
int main(int argc, const char* argv[])
{
	return 0;
}
