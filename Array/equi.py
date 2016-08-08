def equi(ar):
    s=sum(ar)
    ls=0
    for i in range(0,len(ar)):
        s -=ar[i]
        if ls==s:
            return i
        ls +=ar[i]
    return -1
ar=[-7,1,5,2,-4,3,0]
if equi(ar):
    print equi(ar)
else:
    print" equilibriam not exist"
