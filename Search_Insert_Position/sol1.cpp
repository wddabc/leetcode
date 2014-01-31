/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Search_Insert_Position.cpp
* Purpose : Code refined
* Creation Date : 05-01-2014
* Last Modified : Tue Jan 28 23:21:49 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    int searchInsert(int A[], int n, int target) {
        int l = 0, r = n - 1, mid;
        while(l <= r){
            mid = (l+r)/2;
            if(A[mid] == target) return mid;
            if(A[mid] > target) 
                r = mid - 1;
            else 
                l = mid + 1;
        }
        return l;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
