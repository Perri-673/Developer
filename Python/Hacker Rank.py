'''a=[2,1,3,4,5]
a1=[]
a2=[]
s1=0
s2=0
a.sort()
for i in range(len(a)):
    if i%2==0:
        a2.append(a[i])
    else:
        a1.append(a[i])

a1.sort()
print(a1)
a2.sort()
print(a2)
s=a[len(a)-1]
t1=a1[len(a1)-1]
t2=a2[len(a2)-1]
while (a1[0])!=(s):
    for i in a1:
        if i!=s :
            ind=a1.index(i)
            a1[ind]=a1[ind]+1
        s1=s1+1
print(a1)
while str(a2[0])!=str(s):
    for i in a2:
        if i!=s:
            ind=a2.index(i)
            a2[ind]=a2[ind]+1
        s2=s2+1
print(a2)
print(int((s1/len(a1))+(s2/len(a2))))'''

n=input()
a=input().split()
l1=[]
for i in a:
    l1.append(int(i))
b=input().split()
l2=[]
for i in b:
    l2.append(int(i))
l3=[]
for i in range(l1[0],l2[len(l2)-1]+1):
    l3.append(i)
print(l3)
a=[]
b=[]
for i in l3:
    t=[]
    for j in l1:
        if i%j==0:
            t.append(1)
        else:
            t.append(0)
    if 0 not in t:
        a.append(i)
print(a)
for i in a:
    t=[]
    for j in l2:
        if j%i==0:
            t.append(1)
        else:
            t.append(0)
    if 0 not in t:
        b.append(i)
print(b)
print(len(b))










            
            
        
    
        
