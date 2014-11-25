#!/usr/bin/python
# --------------------------------------- 
# File Name : sol1.py
# Creation Date : 25-11-2014
# Last Modified : Tue Nov 25 15:31:45 2014
# Created By : wdd 
# --------------------------------------- 
import sys, re, string, pickle
from itertools import *
class Solution:
    # @return an integer
    def divide(self, dividend, divisor):
        sign = 1 if (dividend > 0 and divisor > 0) or (dividend < 0 and divisor < 0) else 0
        dividend, divisor = abs(dividend), abs(divisor)
        res = 0
        while dividend >= divisor:
            divisor_cpy = divisor
            i = 1
            while (divisor_cpy << 1) <= dividend:
                divisor_cpy <<= 1
                i <<= 1
            res += i
            dividend -= divisor_cpy
        return res if sign else -res
if __name__ == "__main__": main()
