/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Rotate_Image.cpp
* Purpose :
* Creation Date : 07-01-2014
* Last Modified : Tue Jan  7 16:46:31 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    void rotate(vector<vector<int> > &matrix) {
        int m = matrix.size();
        for(int i = 0; i < m/2; ++ i){
            for(int j = i; j < m-i-1; ++ j){
                int tmp = matrix[i][j];
                matrix[i][j] = matrix[m-j-1][i];
                matrix[m-j-1][i] = matrix[m-i-1][m-j-1];
                matrix[m-i-1][m-j-1] = matrix[j][m-i-1];
                matrix[j][m-i-1] = tmp;
            }
        }
    }
int main(int argc, const char* argv[])
{
	vector<vector<int> > res;
	vector<int> v1;
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	res.push_back(v1);
	vector<int> v2;
	v2.push_back(4);
	v2.push_back(5);
	v2.push_back(6);
	res.push_back(v2);
	vector<int> v3;
	v3.push_back(7);
	v3.push_back(8);
	v3.push_back(9);
	res.push_back(v3);
	rotate(res);
	return 0;
}
