t=int(input())
for i in range(t):
    n=int(input())
    a=list(map(int, input().split()))
    ma=0;
    for j in range(n-1):
        ma=max(ma, a[j]*a[j+1])
    print(ma)
