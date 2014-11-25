#! /usr/bin/python
# --------------------------------------- 
# File Name : sol1.py
# Creation Date : 24-11-2014
# Last Modified : Mon Nov 24 17:00:44 2014
# Created By : wdd 
# --------------------------------------- 
import sys, re, string, pickle
from itertools import *
class Solution:
    # @return a boolean
    def isPalindrome(self, x):
        if x < 0: return False
        div = 1
        while x/div >= 10: div *= 10
        while div > 1:
            high = x/div
            low = x%10
            if high != low: return False
            x = (x%div)/10
            div /= 100
        return True

if __name__ == "__main__": main()
