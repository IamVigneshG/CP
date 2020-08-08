#! python3
import sys
import os

# https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/sherlock-and-xor/submissions/



sys.stdin = open('input.txt', 'r') 
sys.stdout = open('output.txt', 'w')
def ans():
    t = int(input())
    for i in range(0,t):
        n=int(input())
        arr = [int(j) for j in input().split()]
        even=0
        odd=0
        for i in arr:
            if i%2 == 0:
                even+=1
            else:
                odd+=1
        print(even*odd)
ans()


