/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Maximal_Rectangle.cpp
* Purpose :
* Creation Date : 14-01-2014
* Last Modified : Wed Jan 15 17:15:09 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    int maximalRectangle(vector<vector<char> > &matrix) {
        if(!matrix.size()) return 0;
        int m = matrix.size(), n = matrix[0].size(), res = 0;
        vector<vector<int> > mark(m, vector<int>(n, 0));
        for(int i = 0; i < m; ++ i){
            mark[i][0] = matrix[i][0] - '0';
            for(int j = 1; j < n; ++ j)
                mark[i][j] = matrix[i][j]=='1'?1+mark[i][j-1]:0;
        }
        for(int i = 0; i < m; ++ i){
            for(int j = 0; j < n; ++ j){
                int tmp = 0;
                for(int k = i; k >=0 && mark[k][j] >= mark[i][j]; --k)
                    tmp += mark[i][j];
                for(int k = i + 1; k < m && mark[k][j] >= mark[i][j]; ++ k)
                    tmp += mark[i][j];
                if(tmp > res) res = tmp;
            }
        }
        return res;
    }
int main(int argc, const char* argv[])
{
	vector<vector<char> > mt;
//	mt.push_back(vector<char>());
//	mt.back().push_back('0');
//	mt.back().push_back('1');
//	mt.back().push_back('1');
//	mt.back().push_back('0');
//	mt.back().push_back('1');
//	mt.push_back(vector<char>());
//	mt.back().push_back('1');
//	mt.back().push_back('1');
//	mt.back().push_back('0');
//	mt.back().push_back('1');
//	mt.back().push_back('0');
//	mt.push_back(vector<char>());
//	mt.back().push_back('0');
//	mt.back().push_back('1');
//	mt.back().push_back('1');
//	mt.back().push_back('1');
//	mt.back().push_back('0');
//	mt.push_back(vector<char>());
//	mt.back().push_back('1');
//	mt.back().push_back('1');
//	mt.back().push_back('1');
//	mt.back().push_back('1');
//	mt.back().push_back('0');
//	mt.push_back(vector<char>());
//	mt.back().push_back('1');
//	mt.back().push_back('1');
//	mt.back().push_back('1');
//	mt.back().push_back('1');
//	mt.back().push_back('1');
//	mt.push_back(vector<char>());
//	mt.back().push_back('0');
//	mt.back().push_back('0');
//	mt.back().push_back('0');
//	mt.back().push_back('0');
//	mt.back().push_back('0');

	mt.push_back(vector<char>());
	mt.back().push_back('1');
	mt.back().push_back('0');
	mt.back().push_back('1');
	mt.back().push_back('1');
	mt.back().push_back('1');
	mt.back().push_back('0');
	mt.back().push_back('0');
	mt.back().push_back('0');
	mt.back().push_back('1');
	mt.back().push_back('0');
	mt.push_back(vector<char>());
	mt.back().push_back('0');
	mt.back().push_back('1');
	mt.back().push_back('0');
	mt.back().push_back('0');
	mt.back().push_back('0');
	mt.back().push_back('0');
	mt.back().push_back('0');
	mt.back().push_back('1');
	mt.back().push_back('1');
	mt.back().push_back('0');
	mt.push_back(vector<char>());
	mt.back().push_back('0');
	mt.back().push_back('1');
	mt.back().push_back('0');
	mt.back().push_back('1');
	mt.back().push_back('0');
	mt.back().push_back('0');
	mt.back().push_back('0');
	mt.back().push_back('0');
	mt.back().push_back('1');
	mt.back().push_back('1');
	mt.push_back(vector<char>());
	mt.back().push_back('1');
	mt.back().push_back('1');
	mt.back().push_back('1');
	mt.back().push_back('0');
	mt.back().push_back('0');
	mt.back().push_back('0');
	mt.back().push_back('0');
	mt.back().push_back('0');
	mt.back().push_back('1');
	mt.back().push_back('0');
	mt.push_back(vector<char>());
	mt.back().push_back('0');
	mt.back().push_back('1');
	mt.back().push_back('1');
	mt.back().push_back('1');
	mt.back().push_back('0');
	mt.back().push_back('0');
	mt.back().push_back('1');
	mt.back().push_back('0');
	mt.back().push_back('1');
	mt.back().push_back('0');
	mt.push_back(vector<char>());
	mt.back().push_back('1');
	mt.back().push_back('1');
	mt.back().push_back('0');
	mt.back().push_back('1');
	mt.back().push_back('1');
	mt.back().push_back('0');
	mt.back().push_back('1');
	mt.back().push_back('1');
	mt.back().push_back('1');
	mt.back().push_back('0');
	cout <<	maximalRectangle(mt) << endl;
	return 0;
}
