/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Search_in_Rotated_Sorted_Array_II.cpp
* Purpose :
* Creation Date : 14-01-2014
* Last Modified : Sun Feb  2 18:04:06 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    bool search(int A[], int n, int key) {
        int l = 0, r = n-1, mid = (l + r)/2;
        while(l <= r){
            mid = (l+r)/2;
            if(key == A[mid])return true;// equal, target hitted
            else if(key > A[mid] && key <= A[r]) l = mid + 1; // left part is sorted and target is inside, step in 
            else if(key >= A[l] && key < A[mid]) r = mid - 1; // right part is sorted and targe is inside, step in
            else if(A[mid] > A[r])l = mid + 1; // otherwise, target is in the unordered part, A[mid] > A[r] means right part is unordered
            else if(A[mid] < A[l])r = mid - 1; // A[mid] < A[l] means left part is unordered
            else l ++;//A[l] <= A[mid] <= A[r], can't decided as at least two of A[l], A[mid] and A[r] are equal
        }
        return false;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
