#!/usr/bin/python
# --------------------------------------- 
# File Name : sol1.py
# Creation Date : 25-11-2014
# Last Modified : Tue Nov 25 12:57:21 2014
# Created By : wdd 
# --------------------------------------- 
import sys, re, string, pickle
from itertools import *
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None
class entry:
    def __init__(self, val, idx):
        self.val = val
        self.idx = idx
    def __cmp__(self, other):
         return self.val < other.val
from Queue import PriorityQueue
class Solution:
    # @param a list of ListNode
    # @return a ListNode
    def mergeKLists(self, lists):
        dummy = ListNode(0)
        ptr, pq = dummy, PriorityQueue()
        for i in range(len(lists)):
            if lists[i]:
                pq.put(entry(lists[i].val, i))
                lists[i] = lists[i].next
        while len(pq):
            ent = pq.get()
            ptr.next = ListNode(ent.val)
            ptr = ptr.next
            if lists[ent.idx]:
                pq.put(entry(lists[i].val, ent.idx))
                lists[ent.idx] = lists[ent.idx].next
        return dummy.nextif __name__ == "__main__": main()
