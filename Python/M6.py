def mean(b):
    v=list(b.values())
    m=0
    s=0
    for i in v:
        s=s+i
    print(s)
    m=s/len(v)
    print(m)
    key=[k for k,v in b.items() if v==m]
    for i in key :
        print(i)
    key=[k for k,v in b.items() if v>m]
    for i in key :
        print(i)
    key=[k for k,v in b.items() if v<m]
    print(key[0])
#d={'sachin': 60,'dhoni': 45,'kholi': 34}
l=[]
a=input()
l.append(a)
b=input()
l.append(b)
c=input()
l.append(c)
d={}
for i in l:
    for j in i:
        if j==' ':
            k=int(i[i.index(j)+1:])
            v=i[0:i.index(j)-1]
            d[str(v)]=int(k)
mean(d)

