#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Fri May 31 10:38:19 2019

@author: aranjan5
"""


import sys, math

def isPerfectSquare(num):
    if(int(math.sqrt(num))==float(math.sqrt(num))):
        return 1
    else:
        return 0

# find all perfect squares below a given input
