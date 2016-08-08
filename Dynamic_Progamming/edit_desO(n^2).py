def des(x,y,m,n):
    dp=[[0 for x in range(n+1)]for x in range(m+1)]
    for i in range(m):
        for j in range(n):
            if i==0:
                dp[i][j]=i
            elif j==0:
                dp[i][j]=j
            elif x[i-1]==y[j-1]:
                dp[i][j]=dp[i-1][j-1]
            else:
                1+min(des(x,y,i,j-1),des(x,y,i-1,j),des(x,y,i-1,j-1))
x="sunday"
y="saturday"
print(des(x,y,len(x),len(y)))
