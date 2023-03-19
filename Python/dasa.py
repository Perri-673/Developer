'''a=int(input())
c=0
while a>0:
    a=a//10
    c=c+1
l=c
print(l)
boo=True
n=0
while a!=n:
    for i in range(1,l+1):
        if i==l-1:
            b=a%10
            n=(b*(10**i))+a//10
    j=2
    while j<n:
        if n%j==0:
            boo=False
            break
        else:
            boo=True
        j=j+1
    if boo==False:
        break
    a=n
if boo==True:
    print('\"CIRCULAR PRIME\"')
else:
    print('\"NOT A CIRCULAR PRIME\"')'''

'''a=int(input())
c=2
s=3
x=1
z=1
n=3
y=0
 zero=1
if a<0:
    print('INVALID DATA')
    x=0
    zero=0
while c<=a:
    zero=0
    p=0
    if a%2==0 and x==1:
        p=1
        b=c-1
        s=c
        while True:
            s=s*b
            b=b-1
            if b==0:
                y=0
                break
    if p==1:
        print(c,s)
        c=c+2
        y=0
        zero=0
    else:
        y=1
        break
if x==1 and y==1:
    print(1,1)
if zero==1:
    print(0,1)
while n<=a:
    if a%2!=0 and x==1:
        m=n-1
        s=n
        while True:
            s=s*m
            m=m-1
            if m==0:
                break
    if z==1 and y==1:
        print(n,s)
        n=n+2
        zero=0
    else:
        break'''

'''s1=input()
w1=open('ONE.txt','w')
w1.write(s1)
w1.close()
s2=input()
w2=open('TWO.txt','w')
w2.write(s2)
w2.close()
w3=open('THREE.txt','w')
o1=open('ONE.txt','r')
o2=open('TWO.txt','r')
r1=o1.read()
r2=o2.read()
w3.write(r2)
w3.write('\n')
w3.write(r1)

o1.close()
o2.close()
w3.close()'''


'''import numpy as np
l=[1,2,3]
print(np.array(l))'''

'''import random
for N in range(2,5,2):
    print(random.randrange(1,N,end='()'))'''




'''def Reverse(Ist):
    return [ele for ele in reversed(Ist)]
Ist = [10,16, 25, 35, 41, 781]
print(Reverse(Ist))'''


print(type(22/3),type(22//3))

