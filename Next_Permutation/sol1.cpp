/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Next_Permutation.cpp
* Purpose :
* Creation Date : 04-01-2014
* Last Modified : Sat Jan  4 23:56:11 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    void nextPermutation(vector<int> &num) {
        int bound;
        for(bound = num.size() - 1; bound >= 0; -- bound)
            if(bound > 0 && num[bound-1] < num[bound]) break;
        if(bound == -1){
            sort(num.begin(), num.end());
            return; 
        }
        int idx = num.size() - 1, min_val = INT_MAX;
        for (int i = num.size() - 1; i >= bound; -- i){
            if (num[i] > num[bound-1] && num[i] < min_val){
                idx = i;
                min_val = num[i];
            }
        }
        int tmp = num[bound-1];
        num[bound-1] = num[idx];
        num[idx] = tmp;
        sort(num.begin()+bound, num.end());
        return;
    }
int main(int argc, const char* argv[])
{
	vector<int> v;
	v.push_back(2);
	v.push_back(1);
	nextPermutation(v);
	for (int i = 0; i < v.size(); ++ i)
	  cout << v[i] << endl;
	return 0;
}
