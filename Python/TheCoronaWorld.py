#! python3
import sys
import os

# https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/the-corona-world/description/
# 3/8/2020



sys.stdin = open('input.txt', 'r') 
sys.stdout = open('output.txt', 'w')

def checkBit(pattern,arr,  n) : 
    count = 0
      
    for i in range(0, n) : 
        if ((pattern & int(arr[i])) == pattern) :            
            count = count + 1      
    return count 
   
  

testcases=int(input())
for i in range(testcases):
    nk=str(input()).split(" ")
    n=int(nk[0])
    k=int(nk[1])
    aj=str(input()).split(" ")
    xarray=list()
    res = 0
    xcount=k
    for bit in range(31,-1,-1) : 
        count = checkBit(res | (1 << bit), aj, n) 
        if ( count >= 1 and n-count<=k) : 
            res =res | (1 << bit) 
            if n-count<=k:
             xcount=n-count
    print(str(res)+" "+str(xcount))