/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : 3Sum_Closest.cpp
* Purpose :
* Creation Date : 03-01-2014
* Last Modified : Fri Jan  3 23:41:19 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    int threeSumClosest(vector<int> &num, int target) {
        sort(num.begin(), num.end());
        int min_clo = INT_MAX, res = 0;
        for (int i = 0; i < num.size(); ++ i){
            int l = i + 1, r = num.size() - 1;
            while(l < r){
                int sum = num[i] + num[l] + num[r];
                int abs_clo = abs(target-sum);
                if (abs_clo < min_clo){
					cout << num[i]<<":"<<num[l] << ":" << num[r] << endl;
					cout << "sum:" << sum << endl;
                    min_clo = abs_clo;
                    res = sum;
                }
                if (sum < target) l ++;
                else if(sum > target) r--;
                else return sum;
            }
        }
        return res;
    }
int main(int argc, const char* argv[])
{
	int a[] = {-3, 0, 1, 2};
	int target = 1;
	vector<int> num(a, a + sizeof(a)/sizeof(int));
	cout << threeSumClosest(num, target) << endl;
	return 0;
}
