'''a = int(input())
l=len(str(a))
for i in range(l-1,-1,-1):
    b=a//10**i
    l1=len(str(b))
    if l1==1:
        b=b
    else:
        b=b%10
    #print(b)
    if i==l-1:
        d=a
        l3=len(str(d))
    else:
        d=d%(10**(i+1))
        #print(d)
        l3=len(str(d))
    for k in range(l3-2,-1,-1):
        c=d//10**k
        l2=len(str(c))
        if l2==1:
            c=c
        else:
            c=c%10
        print(b*10+c,',',c*10+b)'''
'''a=input()
b=a
l=len(a)
for i in a:
    if i.islower()==True:
        i=i.upper()
        b=b+i
    else:
        i=i.lower()
        b=b+i
print(b[l:])'''

'''a=input()
a=a.lower()
l=len(a)
b=0
for i in range(0,l):
    for j in range(0,l):
        if i==j:
            break
        else:
            if a[i]==a[j]:
                print('BAD')
                b=1
if b==0:
    print('GOOD')'''


'''import re
a=input()
while a!='':
    for i in a:
        if re.match('[A,E,I,O,U,a,e,i,o,u]',i):
            b=a.find(' ')
            c=a.find(i)
            if a[c-1]==' ' or c==0 and b>0:
                print(a[c:b])
                a=a[b+1:]
                print(a)
                break
            elif b<0:
                print(a[0:])
                a=''
                break
            
        else:
            c=a.find(i)
            b=a.find(' ')
            a=a[b+1:]
            if b<0:
                a=''
            break'''



        
'''a=int(input())
b=int(input())
l1=[]
for i in range (a):
    l2=[]
    for j in range(b):
        l=input()
        l2.append(l)
    l1.append(l2)
c=input()
print(l1)
s=0
t=0
for i in l1:
    for j in i:
        if j==c:
            t=1
            break
    if t==1:
        break
    s=s+1
if t==1:
    print(l1[s])
if t==0:
    print('Item is not present in the list')'''


'''a=int(input())
b=int(input())
l1=[]
for i in range(a):
    l2=[]
    for j in range(b):
        l=input()
        l2.append(l)
    l1.append(l2)
c=input()
s=0
t=0
for i in l1:
    for j in i:
        if j==c:
            t=1
            break
    if t==1:
        break
    s=s+1
if t==1:
    print(l1[s])
if t==0:
    print('Item is not present in the list')'''

'''def cal (a,b):
    return (a+b,a-b,a*b)
print(cal(2,3))'''

'''def a(l):
    l1=[]
    l2=[]
    l3=[]
    l4=[]
    for i in l:
        
        if i.isdigit():
            l1.append(int(i))
        elif i.isalpha():
            l3.append(i)
        else:
            for j in i:
                c=0
                if j=='.' and c==0:
                    l2.append(float(i))
                    break
                else:
                    if j.isdigit():
                        
                    else:
                        l4.append(i)
                        break
        
    print(l1,l2,l3,l4)
n=int(input())
l=[]
for i in range(n):
    l.append(input())
a(l)'''

'''def f(n):
    if n==1:
        return 1
    else:
        return n*f(n-1)

a=int(input())
s=1
for i in range(1,a+1):
    if i%2==0:
        s=s-i/f(i)
    else:
        s=s+i/f(i)

print(format(s,'.4f'))'''

'''a=int(input())
l=[]
for i in range(a):
    b=int(input())
    l.append(str(b))
print(l)
for k in l:
    f=k
    print(f)
    l1=[]
    for i in range(0,len(f)):
        for j in range(0,len(f)):
            if j==i:
                z=0
            else:
                if f[i]==f[j]:
                    pos=(i+1,j+1)
                    l1.append(pos)
print(l1)'''


'''a='pneumonoultramicroscopicsilicovolcanoconiosis'
b=int(input())
c=int(input())
d=b*2+c
e=d
for i in range(5):
    
    for i in a:
        if(a.index(i))%d==0:
            print(i)
        
        else:
            for i in a:
                t=d-45
                if (a.index(i))%d==0:
                    print(i)
            
        d=d+e'''

'''def check(x,y):
    t=0
    s=x
    while x>0:
        t=t+x%10
        x=x//10
    t1=0
    if len(str(s))==len(str(y)):
        while y>0:
            t1=t1+y%10
            y=y//10
    
    if t==t1:
        return 1
    else:
        return 0
a=int(input())
l=[]
for i in range(a):
    b=int(input())
c=l[0]
l1=l[1:]
l2=[c]
for i in l1:
    boo=check(c,i)
    if boo==1:
        l2.append(i)
if len(l2)==1:
    print('fff')
else:
    for i in l2:
        print(i)'''


'''a1=int(input())
for i in range(1,a1+1):
    f=1
    for i in range(1,i+1):
        f=f*i
    print(i,f)'''

'''a=[1,22,3,3,4,4]
a1=a.copy()
while True:
    
    for i in range(len(a)):
        for j in range(len(a)):
            if i!=j:
                if a[i]==a[j]:
                    a.remove(a[i])
                    a=a
                    print(a)
                
print(a1)'''


'''o=open('text_2.txt','r')
for i in o:
    print(i)'''


'''one=open('one.txt','r')
two=open('two.txt','r')
d={}
c1=1
c2=1
for i in one:
    for j in two:
        
        if c1==c2:
            d[i[0]]=int(j)
            c2=c2+1
            break
        print(c2)
        
        
    c1=c1+1
print(d)'''

'''a=int(input())
f=1
if a<0:
    print('Invalid')
else:
    for i in range(1,a+1):
        j=1
        for k in range(i):
            f=f*j
            j=j+1
        if a%2==0:
            if i%2==0:
                print(i,f)
        else:
            if i%2!=0:
                print(i,f)
        f=1'''


'''a=int(input())
s=10
while s>9:
    s=0
    while a>0:
        s=s+a%10
        a=a//10
    a=s
print(s)'''

'''a=input()
a1=''
for i in a :
    if i.islower():
        i=i.upper()
    else:
        i=i.lower()
    a1=a1+i
print(a1)'''


'''import re
a=input()
a=a.split(' ')
print(a)
for i in a:
    b=i[0]
    if re.match('[A,E,I,O,U,a,e,i,o,u]',b):
        print(i)'''

'''m=int(input())
n=int(input())
l=[]
for i in range(m):
    l1=[]
    for j in range(n):
        a=input()
        l1.append(a)
        l.append(l1)
b=input()
c=0
for i in l:
    for j in i:
        if j==b:
            d=i
            c=1
if c==1:
    print(d)
else:
    print('not')'''

'''a=int(input())
t1=()
for i in range(a):
    b=int(input())
    s=0
    t=()
    for j in range(b):
        if j==0:
            c=input()
            t=t+(c,)
        elif j%2==0:
            c=int(input())
            t=t+(c,)
            s=s+c
        else:
            c=input()
            t=t+(c,)
    t2=(t[0],s)
    t1=t1+(t2,)
print(t1)'''

'''n=int(input())
d={}
c1=0
c2=0
c3=0
for i in range(n):
    for j in range(3):
        a=input()
        b=int(input())
        d[a]=b
    for i in d:
        if d[i]<=49:
            if i=='M1':
                c1=c1+1
            if i=='M2':
                c2=c2+1
            if i=='M3':
                c3=c3+1
d1={'M1':c1,'M2':c2,'M3':c3}
c=0
for i in d1:
    if d1[i]!=0:
        c=c+1
print(d1)
print(c)'''

                
'''def rs(lst):
    ls=[]
    for i in lst:
        s=10
        while s>9:
            s=0
            while i>0:
                s=s+i%10
                i=i//10
            i=s
        ls.append(s)
    return ls
def fs(lst):
    s=10
    z=0
    while s>9:
        if s>9 and z==1:
            lst=[]
            for i in str(s):
                
                lst.append(int(i))
            z=1
        s=0
        
        for i in lst:
            s=s+i
        z=1
        
    return s'''

'''n=int(input())
l=[]
for i in range(n):
    a=int(input())
    if len(str(a))>n:
        print('IV')
    else:
        l.append(a)

l1=rs(l)
sm=fs(l1)
print(sm)
l2=[]
for i in l:
    if str(sm) in str(i):
        l2.append(1)
    else:
        l2.append(0)
s=''
for i in l2:
    s=s+str(i)
print(int(s,2))'''



'''def f(n):
    if n>1:
        return n*f(n-1)
    if n==1 and n==0:
        return 1
    

a=int(input())
print(f(a))'''

'''f1=open('t1.txt','w')
f1.write('Hi')
f1.close()'''

geekCodes = [1, 2, 3, 4]
geekCodes.append([5,6,7,8])
print len(geekCodes)



    


    
    
        
    


            




