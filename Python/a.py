'''s="The quick brown fox jumps over the lazy dog"
a=input()
b=s.find(a)
if b<0:
    print('text not found')
else:
    print('(',b,',',(b-1)+len(a),')')'''


'''import re
a=input()
b=re.findall('[A-Z][a-z]*',a)
c=re.findall('[1-9][0-9]',a)
print(c)
print(b)'''

'''import re
a=input()
while a!='':
    for i in a:
        if re.match(i,'A'):
            b=a.find(' ')
            c=a.find(i)
            if a[c-1]==' ' or c==0 and b>0:
                print(a[c:b])
                a=a[b+1:]
                break
            elif b<0:
                print(a[0:])
                a=''
                break
            
        else:
            c=a.find(i)
            b=a.find(' ')
            a=a[b+1:]
            break'''

'''import re
a=input()
for i in a:
    if re.match('[A,E,I,O,U,a,e,i,o,u]',i):
        print('TRUE')
    else:
        print('FALSE')'''
        



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
                break
            elif b<0:
                print(a[0:])
                a=''
                break
            
        else:
            c=a.find(i)
            b=a.find(' ')
            a=a[b+1:]
            break'''
'''import re
a=input()
c=re.findall('[A,E,I,O,U,a,e,i,o,u][a-z]*',a)
print(c[0])
b=re.findall(' [a,e,i,o,u,A,E,I,O,U][a-z]*',a)
for i in b:
    print(i.strip())'''


'''import re
a=input()
l=[]
b=0
for i in a:
    if re.match('[-,+,*,/]',i):
        if i=='+':
            b=int(l[-1])+int(l[-2])
            del(l[-1:-3:-1])
            l.append(b)
        elif i=='-':
            b=int(l[-2])-int(l[-1])
            del(l[-1:-3:-1])
            l.append(b)
        elif i=='*':
            b=int(l[-1])*int(l[-2])
            del(l[-1:-3:-1])
            l.append(b)
        else:
            b=int(int(l[-2])/int(l[-1]))
            del(l[-1:-3:-1])
            l.append(int(b))
    elif i==' ':
        z=0
    else:
        l.append(i)
print(b)'''


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
                for k in range(len(i)):
                    if j=='-' and k==0:
                        l1.append(int(i))
                        break
                else:
                    if j.isdigit():
                        c=0
                    else:
                        l4.append(i)
                        break
        
    print(l1,l2,l3,l4)
n=int(input())
l=[]
for i in range(n):
    l.append(input())
a(l)'''

'''s1=input()
s2=input()
p=int(input())
for i in range(p,len(s1)):
    print(i)
    if s1[i]==s2[0]:
        print(i)
        break
    if i==len(s1)-1:
        print('Not Available')
        break'''
'''def a(b,c):
    d=b*2
    e=int((c-d)/2)
    return e, b-e
    #print(e)
    #print(b-e)
m=int(input())
n=int(input())
b,c=a(m,n)
print(b,c)'''





'''def frequency(a):
    a=input()
    a=a.lower()
    l=[]
    while a!='':
        b=a.find(' ')
        if b>0:
            c=a[0:b]
            l.append(c)
            a=a[b+1:]
        else:
            l.append(a)
            break
    for i in range(len(l)):
        for j in l:'''

'''def frequency(str):
    counts = dict()
    words = str.split()
    for word in words:
        if word in counts:
            counts[word] += 1
        else:
            counts[word] = 1

    return counts
a=input()
b=frequency(a)
for i in b.items():
    print(i[0],':',i[1])'''

'''def frequency(s):
    t={}
    l=s.split()
    for i in l:
        if i in t:
            t[i]=t[i]+1
        else:
            t[i]=1
    return t
a=input()
b=frequency(a)
for i in b.items():
    print(i[0],':',i[1])'''


'''def frequency(s):
    d={}
    c=1
    l=s.split()
    for i in range(0,len(l)):
        c=1
        for j in range(0,len(l)):
            
            if i==j:
                b=0
            else:
                
                if l[i].lower()==l[j].lower():
                    c=c+1
    
        d[l[i]]=c
    print(d)
    
                    
       
    
    
a=input()
frequency(a)'''

'''a={'a': 2, 'b': 2, 'c': 1, 'd': 1}
if 'b' in a:
    print('true')'''


'''o=open('file.txt','r')
l=[]
c=0
w=0
n=0
for i in o:
    l.append(i)
print(l)
for i in l:
    print(i)
    for j in i:
        print(j)
        if j==' ' or j=='\n' :
            c=c
            w=w+1
            
        else:
            c=c+1
        if j=='\n':
            n=n+1

print('No of Char',c)
print('No of Words',w-2)
print('No of lines',n-1)
for i in l:
    if i[0]=='A' or i[0]=='E' or i[0]=='I' or i[0]=='O' or i[0]=='U' or i[0]=='a' or i[0]=='e' or i[0]=='i'or i[0]=='o' or i[0]=='u':
        v=open('v.txt','w')
        v.write(i)
        
        
    else:
        c=open('c.txt','w')
        c.write(i)'''

'''a=int(input())
s=''
a1=a
while a>0:
    l=a%10
    if a1%l==0:
        s=s+str(l)
    a=a//10
for i in s:
    print(i,end=' ')'''



'''def s(a):
    l=a%10
    if a>0:
        return l+s(a//10)
    else:
        return 0
print(s(9099))'''

for i in range(1,101):
    s=str(i)
    if s[-1]=='0':
        print(i)
        print('\n')
    else:
        print(i,end=' ')








    

            
        
        

        

    


        
    
                
                
        
        
        

        
            
        
        
        
