/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Search_for_a_Range.cpp
* Purpose : Good practice for binary search, get the left most index and right most index
* Creation Date : 05-01-2014
* Last Modified : Tue Jan 28 22:50:40 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    vector<int> searchRange(int A[], int n, int target) {
        int l = 0, r = n - 1, mid = (l+r)/2, s = -1, e = -1;
        while(l <= r){
            if(A[l] == target){s = l; break;} // check the left most
            if(l == r){break;}
            mid = (l+r)/2;
            if(A[mid] >= target){ r = mid; continue; } // the head is in the left
            else {l = mid + 1; continue; }
        }
        l = 0, r = n - 1, mid = (l+r)/2;
        while(l <= r){
            if(A[r] == target){e = r; break;}// check the right most
            if(l == r){break;}
            mid = (l+r)/2;
            if(A[mid + 1] <= target){ l = mid+1; continue; } // the head is in the right
            else {r = mid; continue; }
        }
        vector<int> res;
        res.push_back(s);
        res.push_back(e);
        return res;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
