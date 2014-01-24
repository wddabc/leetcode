/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Rotate_Image.cpp
* Purpose :
* Creation Date : 07-01-2014
* Last Modified : Tue Jan  7 16:46:31 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    pair<int, int> next(int x, int y, int n){
        return make_pair(n-1-y, x);
    }
    void rotate(vector<vector<int> > &matrix) {
        int n = matrix.size();
        for(int i = 0; i <= n/2; ++ i){
            int start = i, end = n - 1 - i;
            if(start >=  end) break;
            for(int k = start; k < end; ++ k){
                int cx = k, cy = i, tmp = matrix[cy][cx];
                for(int t = 0; t < 4; ++ t){
                    pair<int, int> p = next(cx, cy, n);
                    cx = p.first; cy = p.second;
                    int tmp1 = matrix[cy][cx];
                    matrix[cy][cx] = tmp;
                    tmp = tmp1;
                }
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
