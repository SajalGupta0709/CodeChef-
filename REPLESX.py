t=int(input())
for test in range(t):
    n, x, p, k = map(int, input().split())
    arr = list(map(int, input().split()))
    arrsort= sorted(arr)
    if arrsort[p-1]==x:
        print(0)
    elif k>=p and arrsort[p-1]>=x:
        o=0
        for j in reversed(range(0,p)):
            if arrsort[j]>x:
                o+=1
        print(o)
    elif p>=k and arrsort[p-1]<=x:
        o=0
        for i in range(p-1,n):
            if arrsort[i]<x:
                o+=1
        print(o)
    else:
        print(-1)