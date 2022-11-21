t=int(input())
for p in range(t):
    x,y=list(map(int,input().split()))
    s=[]
    if y==1 and x!=1:
        for i in range(x):
            print('a',end="")
    elif x==1:
        print('a')
    elif (x==y):
        print(-1)
    elif x%2!=0 and y>((x//2)+1):
        print(-1)
    elif x%2==0 and y>x/2:
        print(-1)
    elif (x%2==0):
        for i in range(0,y):
            s.append(chr(i+97))
        for i in range(y,(x//2)):
            s.append(chr(97))
        l=s[::-1]
        for i in range(len(l)):
            s.append(l[i])
        for g in range(len(s)):
            print(s[g],end="")
    elif x!=1 and x%2!=0:
        for i in range(0,y):
            s.append(chr(i+97))
        for i in range(y,(x//2)+1):
            s.append(chr(97))
        l=s[len(s)-1:-1:-1]
        for i in range(len(l)):
            s.append(l[i])
        m=s[0:len(s)-1]
        m=m[::-1]
        for i in range(len(m)):
            s.append(m[i])
        for k in range(len(s)):
            print(s[k],end="")
