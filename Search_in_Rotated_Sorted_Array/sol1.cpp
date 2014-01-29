/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Search_in_Rotated_Sorted_Array.cpp
* Purpose :
* Creation Date : 05-01-2014
* Last Modified : Tue Jan 28 22:45:22 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
	//general idea, given a rotated list. At least half part is sorted.
    int search(int A[], int n, int target) {
        int l = 0, r = n-1, mid;
        while(l <= r){
            int mid = (l+r)/2;
            if (target == A[mid]) return mid;//equal, resurn index
            else if(target >= A[l] && target < A[mid]) r = mid;// left part is sorted and target is inside, step in
            else if(target >= A[mid + 1] && target <= A[r]) l = mid + 1;//right part is sorted and targe is inside, step in
            else if(A[l] > A[mid])r = mid;//otherwise, target is in the unordered part, A[l] > A[mid] means left part is unordered
            else l = mid + 1;//otherwise right part is unordered
        }
        return -1;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
