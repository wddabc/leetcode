/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Remove_Duplicates_from_Sorted_Array_II.cpp
* Purpose :
* Creation Date : 10-01-2014
* Last Modified : Fri Jan 10 16:38:29 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    int removeDuplicates(int A[], int n) {
        if(n == 0) return 0;
        if(n == 1) return 1;
        int tmp_cnt = 0, idx = 1;
        for(int i = 1; i < n; ++ i){
            if(A[i] == A[i - 1]){
                if(!tmp_cnt)
                    A[idx++] = A[i];
                tmp_cnt ++;
            }
            else{
                A[idx++] = A[i];
                tmp_cnt = 0;
            }
        }
        return idx;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
