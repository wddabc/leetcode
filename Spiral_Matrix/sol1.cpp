/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Spiral_Matrix.cpp
* Purpose :
* Creation Date : 07-01-2014
* Last Modified : Wed Jan  8 00:38:38 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    vector<int> spiralOrder(vector<vector<int> > &matrix) {
        vector<int> res;
        if(!matrix.size()||!matrix[0].size())return res;
        int N = matrix.size(), M = matrix[0].size(), layer = 0;
        bool flag = true;
        while(layer <=  M - layer - 1&&layer <= N - layer - 1){
            for(int i = layer; i < M - layer - 1; ++ i) res.push_back(matrix[layer][i]);
            if(layer == N - layer - 1) {res.push_back(matrix[layer][M - layer - 1]); break;}
            for(int i = layer; i < N - layer - 1; ++ i) res.push_back(matrix[i][M - layer - 1]);
            if(layer == M - layer - 1) {res.push_back(matrix[N - layer - 1][layer]); break;}
            for(int i = M - layer - 1; i > layer; -- i) res.push_back(matrix[N - layer - 1][i]);
            for(int i = N - layer - 1; i > layer; -- i) res.push_back(matrix[i][layer]);
            layer ++;
        }
        return res;
    }
int main(int argc, const char* argv[])
{
	vector<vector<int> > matrix;
	matrix.push_back(vector<int>());
	matrix.back().push_back(6);
	matrix.back().push_back(9);
	matrix.back().push_back(7);
	matrix.push_back(vector<int>());
	matrix.back().push_back(6);
	matrix.back().push_back(9);
	matrix.back().push_back(7);
	spiralOrder(matrix);
	return 0;
}
