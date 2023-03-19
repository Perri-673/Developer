print("21BKT0050")
f=0
tg=[]
cv=0
cg=[]
def fun(m,g,op,c):
    global f
    global tg
    global cv
    global cg
    if(g==len(c) or op==len(c[g])):
        return
    if(cv+c[g][op]>m):
        fun(m,g,op+1,c)
        return
    cv=cv+c[g][op]
    cg.append(op)
    if(cv>f):
        if(len(cg)>=len(tg)):
            f=cv
            tg=cg.copy()
    fun(m,g+1,0,c)
    cv=cv-c[g][op]
    cg.pop()
    fun(m,g,op+1,c)
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

fun(m,0,0,c)
if(len(tg)!=k):
    print("No solution")
else:
    print("Max Value",f)
    print("Selected Garments:")
    for i in range(0,len(tg)):
        print("Garment",i+1,":-",c[i][tg[i]])































'''ans=0
takengarments=[]
curvalue=0
curgarments=[]
def func(garments,g,op,budget):
    global ans
    global takengarments
    global curvalue
    global curgarments
    
    if(g==len(garments) or op==len(garments[g])):
        return
    if(curvalue+garments[g][op]>budget):
        func(garments,g,op+1,budget)
        return
    curvalue=curvalue+garments[g][op]
    curgarments.append(op)
    if(curvalue>ans):
        if(len(curgarments)>=len(takengarments)):
            ans=curvalue
            takengarments=curgarments.copy()
    
    
    func(garments,g+1,0,budget)
    curvalue=curvalue-garments[g][op]
    curgarments.pop()
    

    func(garments,g,op+1,budget)

"""m=int(input("m:"))
k=int(input("k"))
print(type(k))
garments=[]
for i in range(0,k):
    nc=int(input())
    garment=[]
    for j in range(0,nc):
        a=int(input())
        garment.append(a)
    garments.append(garment)
print(garments)"""


m = 9
k = 3
garments = [[5],[1,4],[4,4,1]]

func(garments,0,0,m)
if(len(takengarments)!=k):
    print("No solution")
    
else:
    print("Max",ans)
    for i in range(0,len(takengarments)):
        print("garment:",i+1," ",garments[i][takengarments[i]])'''








