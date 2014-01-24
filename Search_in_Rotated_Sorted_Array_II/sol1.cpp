/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Search_in_Rotated_Sorted_Array_II.cpp
* Purpose :
* Creation Date : 14-01-2014
* Last Modified : Tue Jan 14 12:22:59 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    bool search(int A[], int n, int key) {
        int l = 0, r = n-1, mid = (l + r)/2;
        while(l <= r){
            mid = (l+r)/2;
            if(key == A[mid])return true;
            else if(key > A[mid] && key <= A[r]) l = mid + 1;
            else if(key >= A[l] && key < A[mid]) r = mid - 1;
            else if(A[mid] > A[r])l = mid + 1;
            else if(A[mid] < A[l])r = mid - 1;
            else l ++;
        }
        return false;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
