#! python3
import sys
import os
# https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/cipher-1/description/


sys.stdin = open('input.txt', 'r') 
sys.stdout = open('output.txt', 'w')

string=input()
length=len(string)
enptK=int(input())
if(length>=1 and length<=1000):
    stringArr=list(string)

    for index,x in enumerate(stringArr):
        ascii=ord(x)
        if(ascii>=65 and ascii<=90):
            ascii=ascii+enptK
            while(ascii>90):
                ascii=ascii-90+64
            stringArr[index]=chr(ascii)

       
        elif(ascii>=97 and ascii<=122):
            ascii=ascii+enptK
            while(ascii>122):
                ascii=ascii-122+96
            stringArr[index]=chr(ascii)

        elif(ascii>=48 and ascii<=57):
            ascii=ascii+enptK
            while(ascii>57):
              ascii=ascii-57+47
            stringArr[index]=chr(ascii)

        else:
            stringArr[index]=chr(ascii)

    result=""
    for x in stringArr:
        result+=x
    print(result)
    
else:
    print("String Constraint Error")