# https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/can-you-solve-it/submissions/
def findValue(arr,n):
    a=[]
    b=[]
    for i in range(n):
        a.append(arr[i]+i)
        b.append(arr[i]-i)
        
    x=a[0]
    y=a[0]

    for i in range(n):
        if a[i]>x:
            x = a[i]
        if a[i]<y:
            y = a[i]
    ans1=x-y
    
    x=b[0]
    y=b[0]
    for i in range(n):
        if b[i]>x:
            x=b[i] 
        if b[i]<y:
            y=b[i]
    ans2=x-y
    
    return max(ans2,ans1)


def main():
    t=int(input())
    for i in range(t):
        n=int(input())
        arr=list(map(int,input().split()))
        print(findValue(arr,n))
main()