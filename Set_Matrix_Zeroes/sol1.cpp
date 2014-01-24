/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Set_Matrix_Zeroes.cpp
* Purpose :
* Creation Date : 09-01-2014
* Last Modified : Thu Jan  9 11:55:48 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    void setZeroes(vector<vector<int> > &matrix) {
        int M = matrix.size(), N = matrix[0].size();
        int v = 1, h = 1;
        for(int i = 0; i < M; ++ i)
            if(!matrix[i][0]){
                v = 0;
                break;
            }
        for(int i = 0; i < N; ++i)
            if(!matrix[0][i]){
                h = 0;
                break;
            }
        for(int i = 1; i < M; ++ i)
            for(int j = 1; j < N; ++ j)
                if(!matrix[i][j]){
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
        for(int i = 1; i < M; ++ i)
            if(!matrix[i][0])
                for(int j = 1; j < N; ++ j)
                    matrix[i][j] = 0;
        for(int j = 1; j < N; ++ j)
            if(!matrix[0][j])
                for(int i = 1; i < M; ++ i)
                    matrix[i][j] = 0;
        if(!v)
            for(int i = 0; i < M; ++ i) matrix[i][0] = 0;
        if(!h)
            for(int i = 0; i < N; ++ i) matrix[0][i] = 0;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
