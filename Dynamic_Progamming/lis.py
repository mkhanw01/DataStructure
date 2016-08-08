def lis(ar):
    n=len(ar)
    l=[1]*n
    for i in range(0,n):
        for j in range(0,i):
            if ar[i]>ar[j] and l[i]<l[j]+1:
                l[i]=l[j]+1
    return max(l)
ar=[10,9,22,8,34,38,40,50,37,44,79]
print("maximum lis length is= ",lis(ar))
