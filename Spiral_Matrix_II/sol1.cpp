/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Spiral_Matrix_II.cpp
* Purpose :
* Creation Date : 08-01-2014
* Last Modified : Wed Jan  8 14:00:03 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    vector<vector<int> > generateMatrix(int n) {
        int stat = 0, offset = 0, t = 1;
        vector<vector<int> > res;
        for(int i = 0; i < n; ++ i) res.push_back(vector<int>(n, 0));
        while(t <= n*n){
            for(int i = offset; i < n-1-offset; ++i) res[offset][i] = t++;
            if(offset == n-1-offset) res[offset][n-1-offset] = t++;
            for(int i = offset; i < n-1-offset; ++i) res[i][n-1-offset] = t++;
            for(int i = n-1-offset; i > offset; --i) res[n-1-offset][i] = t++;
            for(int i = n-1-offset; i > offset; --i) res[i][offset] = t++;
            offset ++;
        }
        return res;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
