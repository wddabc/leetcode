/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Search_Insert_Position.cpp
* Purpose :
* Creation Date : 05-01-2014
* Last Modified : Sun Jan  5 18:58:31 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    int searchInsert(int A[], int n, int target) {
        int l = 0, r = n - 1, mid;
        while(l <= r){
            mid = (l+r)/2;
            if(target <= A[mid]){
                r = mid;
                if (l == r) break;
            }
            else l = mid + 1;
        }
        return l;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
