'''sn=1
st=0
while sn<=100:
    st=st+sn
    sn=sn+1
print(st)'''
'''d='y'
while d=='y'or'Y':
    print(d)
    a=int(input())
    b=int(input())
    c=a+b
    print(c)
    
    d=input("y,n")
    print(d)'''



'''d='y'
while d=='y' or 'Y':
    print(d)
    d=input()'''
'''a=float(input())
b=float(input())              
c=float(input())
if a>=b and a>=c:
    print(a)
elif b>=a and b>=c:
    print(b)
elif c>=a and c>=b:
    print(c)'''



'''a=complex(input())
b=complex(input())
c=a+b
print(c)
print(c.real)
print(c.imag)'''

'''a=int(input())
ltr=0
ml=0
for i in range (a):
    b=int(input())
    c=int(input())
    ltr=b+ltr
    ml=ml+c
if ml/1000>=1:
    ltr=ltr+e//1000
    print(ltr,'(in litres)')
else:
    print(ltr,'(in litres)')
print(ml%1000,"(in ml)")'''
    
    

'''a=float(input())
b=float(input())
c=float(input())
s=(a+b+c)/2
f=(s*(s-a)*(s-b)*(s-c))**0.5
print(format(f,'0.2f'))'''

'''a=input()
b=int(a)
print(type(b))
print(type(a))
print(int(a))'''

'''a=int(input())
b=str(a)
print(str(a))
print(type(b))'''

'''a=int(input())
b=int(input())
a,b=b,a
print(a)
print(b)'''

    
'''a=float(input())
s=lambda f:(5*f)/9-160/9
print(s(a))
print(format(s(a),'.2f'))'''


'''a,b,c,d,e,f,g,h,i,j='I','II','III','IV','V','VI','VII','VIII','XI','X'
k,l,m,n,o,p,q,r='XX','XXX','XL','L','LX','LXX','LXXX','CX'
s=int(input())
t=s//10
u=s%10

for i in range(1,100):
    if t==i:
        v=i
for i in range(1,100):       
    if u==i:
        w=i

print(v,w)'''


'''a=int(input())
b=a//10
c=a%10
if b==0:
    b=''
elif b==1:
        b='X'
elif b==2:
        b='XX'
elif b==3:
        b='XXX'
elif b==4:
        b='XL'
elif b==5:
        b='L'
elif b==6:
        b='LX'
elif b==7:
        b='LXX'
elif b==8:
        b='LXXX'
elif b==9:
        b='XC'
if c==1:
        c='I'
elif c==2:
        c='II'
elif c==3:
        c='III'
elif c==4:
        c='IV'
elif c==5:
        c='V'
elif c==6:
        c='VI'
elif c==7:
        c='VII'
elif c==8:
        c='VIII'
elif c==9:
        c='IX'
print(b+c)'''

'''a=int(input())
print(a*24*60*60)'''

'''a=int(input())
print(bin(a))
print(oct(a))
print(hex(a))'''

'''a=int(input())
b=int(input())
i=a+1
if a>b:
    print('give smaller value first')
elif a<0 or b<0:
    print('invalid input')
else:
    while a<i<b:
        j=2
        prime=1
        while j<i:
            if i%j==0:
               print(i,'not prime')
               prime=0
               break
            j=j+1
        if prime==1:
            print(i,'prime')
        i=i+1'''

'''a=int(input())
c=a
while a>0:
	l=a%10
	if c%l==0:
	    print(l,end=' ')
	a=a//10'''


'''a=float(input())
if a>1000000:
    i=int(a*0.04)
elif a>500000 and a<=1000000:
    i=int(a*0.02)
else:
    i=0
print(i)'''

'''a=float(input())
if a<=10:
    print(format(a*15,'0.2f'))
elif a>10 and a<=90:
    print(format((a-10)*8+150,'0.2f'))
else:
    print(format((150+90*8+(a-100)*6),'0.2f'))'''

'''a=float(input())
c=1
if a==0 or a<0 or a>100:
    print('INVALID MARK')
    c=0
if a<40 and c==1:
    print(a)
    c=0
if c==1:
    b=input()
if a>=80 and a<=100 and b=="T":
    a=a+a*0.08
elif a>=80 and a<=100 and b=='L':
    a=a+a*0.06
elif a>=60 and a<=80 and b=='T':
    a=a+a*0.06
elif a>=60 and a<=80 and b=="L":
    a=a+a*0.04
elif a>=40 and a<=60 and b=='T':
    a=a+a*0.04
elif a>=40 and a<=60 and b=="L":
    a=a+a*0.02
if c==1:
    print(a)'''
'''a=int(input())
if a%2==0:
    b=2
    f=1
    i=1
    while f>0 and b<=a:
        f=b*(b-i)
        b=b+2
        i=i+1
        s=s*f
        print(s)'''

'''a=int(input())
m=a
s=0
while True:
    while m>0:
        s=s+m%10
        m=m//10
    if s>=10:
        m=s
    else:
        print(s)
        break'''


'''a=int(input())
m=a
s=0
while True:
    while m>0:
        s=s+m%10
        m=m//10
        if s>=10:
            m=s
    print(s)
    break'''




'''a=int(input())
i=1

while i<=a:
    if a%i==0:
        
        t=i
    
    b=0
    if t==2:
        print(t,end=' ')
    
    for j in range(2,t):
           if t%j==0:
                b=0
                break
        
           else:
               b=1
    if b==1:
        print(t,end=' ')
        
    
    i=i+1'''
import random
def say_hello(_2):
    def ret_1() :
        try:_2()
        except ZeroDivisionError: print ("Don't divide by zero!")
        finally: print("Hi!")
        if random. randint (1,2)==2:
            print("Hello!")
    return ret_1
def print_smiley(_1):
    def ret_2():
        if random. randint(1,2) == 2:
            print(": D")
        _1()
    return ret 2
@say_hello
@print_smiley
def cool function():
    a = 10 / random. randint(0,1)
cool_function()












