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
    if (a%2==0 and x==1):
        
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
if x==1 and y==1 :
    print('1','1')
if zero==1  :
    print('0',1)
while n<=a:
    if a%2!=0 and x==1:
        m=n-1
        s=n
        while True:
            s=s*m
            m=m-1
            if m==0:
                break
    if z==1 and y==1  :
        print(n,s)
        n=n+2
        zero=0
    else:
        break'''

def f(n):
    if n==1:
        return 1
    else:
        return n*f(n-1)
a=int(input())
print(f(a))

    
