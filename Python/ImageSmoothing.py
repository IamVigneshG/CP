#! python3
import sys
import os
import array as arr

# https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/image-smoothing-3/analytics/
sys.stdin = open('input.txt', 'r') 
sys.stdout = open('output.txt', 'w')

sizes=list(map(int,input().split(" ")))
fLength=(2*sizes[1])+1
mask=[]
NewG=[]
G=[]
for i in range(fLength):
    mask.append(input().split(" "))
    
for i in range(sizes[0]):
    G.append(input().split(" "))
        


for i in range(sizes[0]):
    G2=str()
    for j in range(sizes[0]):
        data=0
        for k in range(fLength):
            Mivalue=sizes[1]-(k)
            for r in range(fLength):
                Mjvalue=sizes[1]-(r)
                dif=i-Mivalue
                dif1=j-Mjvalue
                if dif<0 or dif1<0 or dif1>=sizes[0] or dif>=sizes[0]:
                    continue
                data=data+(int(G[dif][dif1])*int(mask[k][r]))
        if j==0:
            G2 =str(data)
        else:
            G2 = G2 +" "+str(data)
    print(G2)