#! /usr/bin/python
# --------------------------------------- 
# File Name : sol1.py
# Creation Date : 23-11-2014
# Last Modified : Sun Nov 23 22:49:33 2014
# Created By : wdd 
# --------------------------------------- 
import sys, re, string, pickle
from itertools import *
class Solution:
    # @param A, a list of integers
    # @return an integer
    def maxProduct(self, A):
        dp_max, dp_min, res_max = list(A), list(A) , float('-inf')
        for i, val in enumerate(A):
            if i>0:
                if val > 0:
                    if dp_max[i-1] > 0:
                        dp_max[i] = dp_max[i-1]*val
                    if dp_min[i-1] < 0:
                        dp_min[i] = dp_min[i-1]*val
                elif val < 0:
                    if dp_max[i-1] > 0:
                        dp_min[i] = dp_max[i-1]*val
                    if dp_min[i-1] < 0:
                        dp_max[i] = dp_min[i-1]*val
            if dp_max[i] > res_max:
                res_max = dp_max[i]
        return res_max

def main():
	A = [3,-1,4]
	s = Solution()
	print s.maxProduct(A)

if __name__ == "__main__": main()
