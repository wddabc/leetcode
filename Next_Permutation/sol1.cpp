/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Next_Permutation.cpp
* Purpose :
* Creation Date : 04-01-2014
* Last Modified : Tue Jan 28 21:55:35 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    void nextPermutation(vector<int> &num) {
        int bound;
        for(bound = num.size() - 1; bound >= 0; -- bound)
            if(bound > 0 && num[bound-1] < num[bound]) break;// num[bound-1] is the first element that smaller than the next one
        if(bound == -1){// the elements are descending order
            sort(num.begin(), num.end()); // sort to ascending order 
            return; 
        }
        int idx = num.size() - 1, min_val = INT_MAX;// find the smallest element that larger than num[bound-1]
        for (int i = num.size() - 1; i >= bound; -- i){
            if (num[i] > num[bound-1] && num[i] < min_val){
                idx = i;
                min_val = num[i];
            }
        }
        int tmp = num[bound-1];// swap the smallest one with the num[bound-1]
        num[bound-1] = num[idx];
        num[idx] = tmp;
        sort(num.begin()+bound, num.end()); //sort the numbers after bound
        return;
    }
int main(int argc, const char* argv[])
{
	vector<int> v;
	v.push_back(2);
	v.push_back(1);
	nextPermutation(v);
	for (int i = 0; i < v.size(); ++ i)
	  cout << v[i] << endl;
	return 0;
}
