#! /usr/bin/python
# --------------------------------------- 
# File Name : sol1.py
# Creation Date : 23-11-2014
# Last Modified : Sun Nov 23 23:34:44 2014
# Created By : wdd 
# --------------------------------------- 
import sys, re, string, pickle
from itertools import *
class Solution:
    # @param num, a list of integer
    # @return an integer
    def findMin(self, num):
        s,e =0,len(num)-1
        while s < e:
            mid = (s+e)/2
            if num[s] <= num[mid] and num[mid+1] <= num[e]:
                return min(num[s], num[mid+1])
            if num[s] > num[mid]:
                e = mid
            else:
                s = mid + 1
        return num[s]

if __name__ == "__main__": main()
