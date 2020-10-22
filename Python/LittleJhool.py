#  https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/litte-jhool-and-world-tour-1/
for i in range(int(input())):
    n,m=map(int,input().split())
    countries=[]
    count=0
    for i in range(m):
        x,y=map(int,input().split())
        
        if(x==y):
            count=1
            break
        elif(x > n and x > y):
            if( (x-y) > n ):
                count = 1
    if(count==0):
        print("YES")
    else:
        print("NO")