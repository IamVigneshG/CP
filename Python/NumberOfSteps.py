#! python3
import sys
import os

# https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/make-all-equal-90a21ab2/description/

sys.stdin = open('input.txt', 'r') 
sys.stdout = open('output.txt', 'w')

length=int(input())
arrayA=list(map(int,input().split()))
arrayB=list(map(int,input().split()))


if length == len(arrayA) and length == len(arrayB):      
    counter=0
    mindivisor=6000
    for i in range(length):
        if arrayB[i]!=0 and arrayA[i]!=0:
            divisor=int(arrayA[i]/arrayB[i])
            if divisor<mindivisor:
                mindivisor=divisor
                minDivisorA=arrayA[i]
                minDivisorB=arrayB[i] 
    factors = list()
    diff=minDivisorA-minDivisorB
    factors.append(int(minDivisorA))
    for i in range(mindivisor):
        if diff>=0:
            factors.append(int(diff))
            diff=diff-minDivisorB
    minimumSteps=-1
    for i in range(len(factors)):
        counter=0
        if factors[i] > min(arrayA):
            counter=-1
        else:
            for j in range(length):
                if (counter!=-1 or counter==0) and factors[i]!=0:
                    modu=arrayA[j]%factors[i]
                    if arrayB[j]!=0 and arrayA[j]%arrayB[j]==factors[i]  :
                        counter=counter+int(arrayA[j]/arrayB[j])   
                    elif factors[i]==arrayA[j]:
                        counter=counter
                    elif arrayB[j]==1:
                        counter=counter+(arrayA[j]-factors[i])
                    elif factors[i]!=1 and (arrayA[j]-factors[i])%arrayB[j]==0:
                        counter=counter+int((arrayA[j]-factors[i])/arrayB[j])        
                    elif arrayA[j]!=factors[i] and (modu!=arrayB[j]):
                        counter=-1
                        break
                    elif counter!=-1:
                        if modu!=0 or factors[i]!=1:
                            div=int(arrayA[j]/factors[i])
                            counter=counter+div
                        else :
                            counter=-1
                elif factors[i]==0:
                    if arrayB[j]!=0:
                        div=int(arrayA[j]/arrayB[j])
                        counter=counter+div
                    else:
                        counter=counter+arrayA[j]

            if counter!=-1 and minimumSteps<counter:
                minimumSteps=counter
                break
    print("%s" %minimumSteps)
else:
    print("length mismatch")