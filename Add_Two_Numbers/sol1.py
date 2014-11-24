#! /usr/bin/python
# --------------------------------------- 
# File Name : sol1.py
# Creation Date : 24-11-2014
# Last Modified : Mon Nov 24 11:12:10 2014
# Created By : wdd 
# --------------------------------------- 
import sys, re, string, pickle
from itertools import *
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    # @return a ListNode
    def addTwoNumbers(self, l1, l2):
        dummy = ListNode(0)
        ptr = dummy
        rem = 0
        while l1 or l2 or rem:
            tmp_sum = rem
            if l1:
                tmp_sum += l1.val
                l1 = l1.next
            if l2:
                tmp_sum += l2.val
                l2 = l2.next
            rem = tmp_sum/10
            tmp_sum %= 10
            ptr.next = ListNode(tmp_sum)
            ptr = ptr.next
        return dummy.next
if __name__ == "__main__": main()
