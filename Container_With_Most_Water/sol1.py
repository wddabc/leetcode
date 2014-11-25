#! /usr/bin/python
# --------------------------------------- 
# File Name : sol1.py
# Creation Date : 24-11-2014
# Last Modified : Mon Nov 24 20:36:16 2014
# Created By : wdd 
# --------------------------------------- 
import sys, re, string, pickle
from itertools import *
class Solution:
    # @return an integer
    def maxArea(self, height):
        res, l, r = 0, 0, len(height)-1
        while l < r:
            res = max(min(height[l], height[r])*(r-l), res)
            if height[l] < height[r]:
                lh = height[l]
                while height[l] <= lh and l < r: l += 1
            else:
                rh = height[r]
                while height[r] <= rh and l < r: r -= 1
        return res
if __name__ == "__main__": main()
