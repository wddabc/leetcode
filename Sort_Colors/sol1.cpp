/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Sort_Colors.cpp
* Purpose :
* Creation Date : 09-01-2014
* Last Modified : Thu Jan  9 15:30:59 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    void sortColors(int A[], int n) {
        int red_ptr = 0, white_ptr = 0;
        for(int i = 0; i < n; ++ i){
            int col = A[i];
            A[i] = 2;
            switch(col){
                case 0: 
                    A[white_ptr++] = 1; 
                    A[red_ptr++] = 0;
                    break;
                case 1:
                    A[white_ptr++] = 1;
                    break;
            }
        }
    }
int main(int argc, const char* argv[])
{
	return 0;
}
