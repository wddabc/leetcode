/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Pascal_s_Triangle_II.cpp
* Purpose :
* Creation Date : 19-01-2014
* Last Modified : Sun Jan 19 23:35:32 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    vector<int> getRow(int rowIndex) {
        vector<int> res(1,1);
        for(int i = 0; i < rowIndex; ++ i){
            int prev = 0, last = res.back();
            for(int j = 0; j < res.size(); ++ j){
                res[j] += prev;
                prev = res[j]-prev;
            }
            res.push_back(last);
        }
        return res;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
