print("21BKT0050")
def fun(c,m,k):
    dp=[]
    for i in range(k+1):
        a=[]
        for j in range(m+1):
            a.append(0)
        dp.append(a)
    for i in range(1,k+1):
        for j in range(1,m+1):
            for l in range(len(c[i-1])):
                if c[i-1][l]<=j :
                    dp[i][j]=max(dp[i][j],dp[i-1][j-c[i-1][l]]+c[i-1][l])
    if(dp[k-1]==dp[k]):
        return 0
    else:
        return dp[k][m]
m=int(input("Enter M Value:"))
k=int(input("Enter K Value:"))
c=[]
for i in range(0,k):
    print("Enter Number of Options for",i+1,"Garment:")
    nc=int(input())
    b=[]
    print("Enter the Price:")
    for j in range(0,nc):
        a=int(input())
        b.append(a)
    c.append(b)
boo=fun(c,m,k)
if(boo==0):
    print("No Solution")
else:
    print("Max possible amount:",fun(c,m,k))


























'''def maxValue(garments, budget, k):
    dp=[]
    for i in range(k + 1):
        a=[]
        for j in range(budget + 1):
            a.append(0)
        dp.append(a)
    for i in range(1, k+1):
        for j in range(1, budget + 1):
            for option in range(len(garments[i-1])):
                #print("i j option",i,j,option)
                print(option)
                if garments[i-1][option]<=j :
                    
                    dp[i][j] = max(dp[i][j], dp[i-1][j-garments[i-1][option]] + garments[i-1][option])
                    print(dp[i-1][j-garments[i-1][option]])
                    print(garments[i-1][option])
                    print(max(dp[i][j], dp[i-1][j-garments[i-1][option]] + garments[i-1][option]))
                    print(dp)
                    print("*****************")
                else:
                    print("####################\n#####################")
    
    return dp[k][budget]

m = 9
k = 3
garments = [[5],[1,4],[4,4,1]]
print("Max possible amount:", maxValue(garments, m, k))'''
