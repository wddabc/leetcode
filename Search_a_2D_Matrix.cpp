/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Search_a_2D_Matrix.cpp
* Purpose :
* Creation Date : 09-01-2014
* Last Modified : Thu Jan  9 15:06:24 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    bool searchMatrix(vector<vector<int> > &matrix, int target) {
        int l = 0, r = matrix.size() - 1, mid  = (l+r)/2;
        while(l <= r){
            mid = (l+r)/2;
            if(target == matrix[mid][0]) return true;
            if(target < matrix[mid][0])
                r = mid - 1;
            else
                l = mid + 1;
        }
        if(!l) return false;
        int vidx = l-1;
        l = 0; 
        r = matrix[vidx].size() - 1;
        mid = (l+r)/2;
        while(l <= r){
            mid = (l+r)/2;
            if(target == matrix[vidx][mid]) return true;
            if(target < matrix[vidx][mid])
                r = mid - 1;
            else
                l = mid + 1;
        }
        return false;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
