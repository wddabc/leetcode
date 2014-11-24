#! /usr/bin/python
# --------------------------------------- 
# File Name : sol1.py
# Creation Date : 24-11-2014
# Last Modified : Mon Nov 24 02:25:42 2014
# Created By : wdd 
# --------------------------------------- 
import sys, re, string, pickle
from itertools import *
class Solution:
    # @return a tuple, (index1, index2)
    def twoSum(self, num, target):
        sub_dict = {}
        for i, val in enumerate(num):
             if val in sub_dict:
                 return (sub_dict[val]+1, i+1)
             sub_dict[target-val] = i
        return (0,0)

if __name__ == "__main__": main()
