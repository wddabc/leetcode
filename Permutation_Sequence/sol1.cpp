/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Permutation_Sequence.cpp
* Purpose :
* Creation Date : 08-01-2014
* Last Modified : Wed Jan  8 16:36:20 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    int get_idx(int k, vector<bool> &used){
        int i;
        for(i = 0 ; i < used.size()&& k >= 0; ++ i){
            if(!used[i]) k--;
        }
        used[i-1] = true;
        return i-1;
    }
    string getPermutation(int n, int k) {
        string res = "", dict = "";
        vector<bool> used(n, false);
        k -= 1;
        int fact = 1;
        for(int i = 0; i < n; ++ i) dict += (char)'1' + i;
        for(int i = 1; i < n; ++ i) fact *= i;
        for(int i = 0; i < n; ++ i){
            int p = k/fact, idx = get_idx(p, used);
            res += dict[idx];
            k %= fact;
            fact /= max(1, n-1-i);
        }
        return res;
    }
int main(int argc, const char* argv[])
{
	cout << getPermutation(2,1) << endl;
	return 0;
}
