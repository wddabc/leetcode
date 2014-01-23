/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Gray_Code.cpp
* Purpose :
* Creation Date : 17-01-2014
* Last Modified : Fri Jan 17 00:44:19 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    vector<int> grayCode(int n) {
        if(n == 0) return vector<int>(1,0);
        vector<int> res = grayCode(n-1);
        int len = res.size();
        int base = 1<<(n-1);
        for(int i = len - 1; i >=0; -- i)
            res.push_back(base+res[i]);
        return res;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
