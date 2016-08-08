def des(x,y,m,n):
    if m==0:
        return n
    if n==0:
        return m
    if x[m-1]==y[n-1]:
        return des(x,y,m-1,n-1)
    return 1+min(des(x,y,m-1,n-1),des(x,y,m,n-1),des(x,y,m-1,n))
x="sunday"
y="saturday"
print(des(x,y,len(x),len(y)))
