/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : ZigZag_Conversion.cpp
* Purpose : Straight forward solution O(n^2) space, simulation
* Creation Date : 17-12-2013
* Last Modified : Sun Jan 26 11:48:49 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
struct state{
    int i, j, s;
    state(int idx, int jdx, int sta):i(idx),j(jdx),s(sta){}
};
state next(int i, int j, int row, int s){
    if(i == (row - 1)) return state(max(0,i-1),j+1,1);
	else if(i == 0) return state(i+1,j,0);
	else if(s)return state(max(0,i-1),j+1,1);
    return state(i+1,j,0);
}
string convert(string s, int nRows) {
    char** A = new char*[nRows];
	int len = s.length();
    for(int i = 0; i < nRows; ++ i){
        A[i] = new char[len];
        for(int j = 0; j < len; ++ j) A[i][j] = '\0';
    }
    int sta = 0, sidx = 0, ci = 0, cj = 0;
    while(sidx != s.length()){
        A[ci][cj] = s[sidx++];
        state ns = next(ci, cj, nRows, sta);
        ci = ns.i; cj = ns.j; sta = ns.s;
    }
    string res = "";
    for(int i = 0; i < nRows; ++ i)
        for(int j = 0; j < len; ++ j)
            if(A[i][j] != '\0')res+=A[i][j];
	for(int i = 0; i < nRows; ++ i)delete[] A[i];
	delete[] A;
    return res;
}
int main(int argc, const char* argv[])
{
	cout << convert("PAYPALISHIRING", 1) << endl;
	return 0;
}
