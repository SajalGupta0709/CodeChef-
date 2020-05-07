t=int(input())
for _ in range(t):
    n=int(input())
    x=int(pow(max(n-700,0),0.5))
    ans=x*700
    x+=1
    d=x*x
    while d<=n:
        ans+=min(700,n-d)
        x+=1
        d=x*x
    print(ans)
