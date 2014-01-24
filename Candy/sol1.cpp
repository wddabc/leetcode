/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Candy.cpp
* Purpose :
* Creation Date : 21-01-2014
* Last Modified : Tue Jan 21 22:35:39 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    int candy(vector<int> &ratings) {
        int n = ratings.size();
        vector<int> l(n, 1);
        for(int i = 1; i < n; ++ i)
            if(ratings[i] > ratings[i-1])
                l[i] = l[i-1]+1;
        int res = l[n-1], r = 1;
        for(int i = n-2; i >= 0; -- i){
            if(ratings[i] > ratings[i+1]) r ++;
            else
                r = 1;
            res += max(l[i], r);
        }
        return res;
    }int main(int argc, const char* argv[])
{
	return 0;
}
