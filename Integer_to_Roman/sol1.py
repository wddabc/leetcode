#! /usr/bin/python
# --------------------------------------- 
# File Name : sol1.py
# Creation Date : 24-11-2014
# Last Modified : Mon Nov 24 20:57:50 2014
# Created By : wdd 
# --------------------------------------- 
import sys, re, string, pickle
from itertools import *
class Solution:
    # @return a string
    def intToRoman(self, num):
        res, dec = "", 0
        dict = [['']*3 for i in range(0,4)]
        dict[0][0] = 'I'
        dict[0][1] = 'V'
        dict[0][2] = 'X'
        dict[1][0] = 'X'
        dict[1][1] = 'L'
        dict[1][2] = 'C'
        dict[2][0] = 'C'
        dict[2][1] = 'D'
        dict[2][2] = 'M'
        dict[3][0] = 'M'
        while num > 0:
            digit = num%10
            num /= 10
            if not digit:
                dec += 1
                continue
            tmp = ""
            if digit < 4:
                for i in range(0, digit):
                    tmp += dict[dec][0]
            elif digit == 4:
                tmp += dict[dec][0]
                tmp += dict[dec][1]
            elif digit > 4 and digit < 9:
                tmp += dict[dec][1]
                for i in range(5, digit):
                    tmp += dict[dec][0]
            elif digit == 9:
                tmp += dict[dec][0]
                tmp += dict[dec][2]
            dec += 1
            res = tmp + res
        return res
if __name__ == "__main__": main()
