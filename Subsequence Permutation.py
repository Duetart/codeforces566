t=int(input())
for i in range(t):
    n=int(input())
    s1=list(input())
    s2=sorted(s1)
    count=0;
    i=0;
    while i<n:
        if s1[i]!=s2[i]:
            count=count+1
        i=i+1
    print(count)
