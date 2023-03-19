'''l=int(input())
b=int(input())
w=int(input())
ll=int(input())
bb=int(input())
ww=int(input())
n=int(input())
area_one=ll*bb
pagea=l*b
nl=pagea/area_one
letterw=ww*nl*n
pagew=l*b*w*n
t=letterw+pagew
print(t)
s=0
while t>0:
    s=s+t%10
    t=t//10
print(s)'''
'''a=int(input())
c=0
while a>0:
    a=a//10
    c=c+1
print(c)
l=len(str(a))
boo=0
t=a
m=a
while a==t and boo==0:
    for i in range(1,l+1):
        if i==l-1:
            s=a//10**i
            d=a%10**i
            t=d*10+s
    print(t)
    if m==t:
        boo=1
    a=t'''



'''a=int(input())
l=len(str(a))
if (a<=1):
    print('Invalid Input')
else:
    i=l-1
    b=a
    for m in range (0,l):
        a=b
        l=len(str(a))
        i=l-1
        f=a//(10**i)
        for n in range (0,l-1):
            r=a%(10**i)
            j=i-1
            s=r//(10**j)
            print(f*10+s,' ',s*10+f)
            a=r
            l=len(str(a))
            i=l-1
        b=b%(10**(n+1))'''


'''a=int(input())
l=len(str(a))
if (a<=1):
    print('INVALID INPUT')
else:
    i=l-1
    b=a
    for m in range(0,l):
        a=b
        l=len(str(a))
        i=l-1
        f=a//(10**i)
        for n in range(0,l-1):
            r=a%(10**i)
            j=i-1
            s=r//(10**i)
            print(f*10+s,',',s*10+f)
            a=r
            l=len(str(a))
            i=l-1
        b=b%(10**(n+1))'''

'''a=int(input())
l=[]
for i in range(0,a):
    b=int(input())
    l.append(b)
c=int(input())
l1=l[0:c]
l2=l[c+1:]
s1=0
s2=0
for i in l1:
    s1=s1+i
for i in l2:
    s2=s2+i
if s1==s2:
    print(c)
    print(l[c])
    print(s1)
else:
    print(c)
    print(l[c])
    print("Not equal")'''

'''a=int(input())
l1=[]
for i in range(a):
    b=int(input())
    for i in range (b):
        if i==0:
            l=()
            c=input()
            l=l+(c,)
        elif i==1:
            c=input()
            l=l+(c,)
        elif i%2==0:
            c=int(input())
            l=l+(c,)
        else:
            c=input()
            l=l+(c,)
    l1.append(l)
print(l1)
l2=()
for i in l1:
    s=0
    l3=()
    for j in range (len(i)):
        if j==0:
            l3=l3+(i[j],)
        elif j%2==0:
            s=s+i[j]
    l3=l3+(s,)
    l2=l2+(l3,)
print(l2)'''

'''a=int(input())
d={}
b=1
l=[]
for i in range(a):
    d1={}
    for j in range(6):
        if j%2==0:
            c=input()
            l.append(c)
        else:
            e=int(input())
            d1.update({c:e})
    d[b]=d1
    b+=1
s=0
t=0
u=0
y=0
g=l[0]
f=l[1]
h=l[2]
for i in range(1,b):
    j=d[i]
    if j[g]<50:
        s=s+1
    if j[f]<50:
        t=t+1
    if j[h]<50:
        u=u+1
    z=j.values()
    for k in z:
        if k<50:
            y=y+1
            break
d2={g:s,f:t,h:u}
print(d2)
print(y)'''







    
   
        

    



        



    
        
        
        
    

                
                
        
        

    



