#! /usr/bin/python
# --------------------------------------- 
# File Name : sol1.py
# Creation Date : 25-11-2014
# Last Modified : Tue Nov 25 00:32:56 2014
# Created By : wdd 
# --------------------------------------- 
import sys, re, string, pickle
from itertools import *
class Solution:
    # @return an integer
    def threeSumClosest(self, num, target):
        res, min_abs = 0, 0x7ffffff
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
                tmp_abs = abs(sum-target)
                if tmp_abs < min_abs:
                    min_abs = tmp_abs
                    res = sum
                if sum > target: r -= 1
                elif sum < target: l += 1
                else: break
        return res
if __name__ == "__main__": main()
