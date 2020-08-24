# cook your dish here
t=int(input())
while(t>0):
    s=input()
    p=input()
    s1=s
    if(len(s)==len(p)):
        print(p)
        continue
    for e in p:
        s1=s1.replace(e,'',1)
    s1=''.join(sorted(s1))
    ch=p[0]
    i=0
    while(i<len(s1)):
       if(s1[i]>ch):
           pos=i
           break
       else:
           i+=1
           pos=i
    if(pos>=1):
        s3=s1[ : pos]+p+s1[pos : ]
        while(pos>0):
            if(s1[pos-1]==ch):
                pos-=1
            else:
                g=pos
                break
        s4=s1[ : g]+p+s1[g : ]
        if(s3>s4):
            print(s4)
        else:
            print(s3)
    elif(pos==0):
        s3=s1[ : pos]+p+s1[pos : ]
        s4=s1[ : pos+1]+p+s1[pos+1 : ]    
        if(s3>s4):
            print(s4)
        else:
            print(s3)
    t-=1    