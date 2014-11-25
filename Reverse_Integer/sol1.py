#! /usr/bin/python
# --------------------------------------- 
# File Name : sol1.py
# Creation Date : 24-11-2014
# Last Modified : Mon Nov 24 16:31:14 2014
# Created By : wdd 
# --------------------------------------- 
import sys, re, string, pickle
from itertools import *
class Solution:
    # @return an integer
    def reverse(self, x):
        if x < 0:
            return -self.reverse(-x)
        digit, res = 0, 0
        while x != 0:
            digit = x%10
            res = res*10 + digit
            x /= 10
        return res if res <= 0x7fffffff else 0
if __name__ == "__main__": main()
