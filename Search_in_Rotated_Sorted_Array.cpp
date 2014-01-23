/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Search_in_Rotated_Sorted_Array.cpp
* Purpose :
* Creation Date : 05-01-2014
* Last Modified : Sun Jan  5 12:19:51 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    int search(int A[], int n, int target) {
        int l = 0, r = n-1, mid;
        while(l <= r){
            int mid = (l+r)/2;
            if (target == A[mid]) return mid;
            else if(target >= A[l] && target < A[mid]) r = mid;
            else if(target >= A[mid + 1] && target <= A[r]) l = mid + 1;
            else if(A[l] > A[mid])r = mid;
            else l = mid + 1;
        }
        return -1;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
