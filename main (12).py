t=int(input())
for i in range(t):
    n=int(input())
    for i in range(n):
        print("("*(n-i)+")"*(n-i)+"()"*i)