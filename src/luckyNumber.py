#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Fri May 31 10:38:20 2019

@author: agupta47
"""

""" Description (optional)
Program to check if a given number is Lucky (all digits are different)
Input: n = 983
Output: true
All digits are different

Input: n = 9838
Output: false
8 appears twice
"""

n = int(input("Enter a number : "))
dic = set()

def lucky(n):
    while(n>0):
        tmp = n%10
        if tmp in dic:
            print("False")
            print("{tmp} appears twice")
            return 
        else:
            dic.add(int(tmp))
        n = n/10
    print("True")
    print("All digits are different")
    return

lucky(n)
    