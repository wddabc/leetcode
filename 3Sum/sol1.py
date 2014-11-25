#! /usr/bin/python
# --------------------------------------- 
# File Name : sol1.py
# Creation Date : 24-11-2014
# Last Modified : Mon Nov 24 22:02:39 2014
# Created By : wdd 
# --------------------------------------- 
import sys, re, string, pickle
from itertools import *
class Solution:
    # @return a list of lists of length 3, [[val1,val2,val3]]
    def threeSum(self, num):
        res = []
        mynum = sorted(num)
        for i in range(len(mynum)):
            if i > 0 and mynum[i] == mynum[i-1]:
                continue
            l, r = i + 1, len(mynum)-1
            while l < r:
                if l > i+1 and mynum[l] == mynum[l-1]:
                    l += 1
                    continue
                if r < len(mynum)-1 and mynum[r] == mynum[r+1]:
                    r -= 1
                    continue
                sum = mynum[i] + mynum[l] + mynum[r]
                if sum > 0: r -= 1
                elif sum < 0: l += 1
                else:
                    res += [[mynum[i], mynum[l], mynum[r]]]
                    l += 1
                    r -= 1
        return res
if __name__ == "__main__": main()
