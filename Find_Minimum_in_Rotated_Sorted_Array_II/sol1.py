#! /usr/bin/python
# --------------------------------------- 
# File Name : sol1.py
# Creation Date : 23-11-2014
# Last Modified : Sun Nov 23 23:59:41 2014
# Created By : wdd 
# --------------------------------------- 
import sys, re, string, pickle
from itertools import *
class Solution:
    # @param num, a list of integer
    # @return an integer
    def findMin(self, num):
        s, e = 0, len(num)-1
        while s < e:
            while s < e and num[s] == num[s+1]:
                s = s+1
            while s < e and num[e] == num[e-1]:
                e = e-1
            if (s == e): break;
            mid = (s+e)/2
            if num[s] <= num[mid] and num[mid+1] <= num[e]:
                return min(num[s], num[mid+1])
            elif num[s] <= num[mid]:
                s = mid+1
            else:
                e = mid
        return num[s]

if __name__ == "__main__": main()
