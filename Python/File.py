n=input()
w=open('File.txt','w')
for i in n:
    if '\\n' in n:
        c=n.index('\\n')
        s=n[:c]
        w.write(s)
        w.write('\n')
        n=n[c+2:]
    else:
        s=n
        w.write(s)
        break
w.close()
o=open('File.txt','r')
print('The User Entered File is(File.txt):')
print(o.read())
o.close()
o=open('File.txt','r')
n=0
w=0
c=0
for i in o:
    n=n+1
o.close()
o=open('File.txt','r')
r=o.read()
for i in r:
    if i==' ':
        w=w+1
    else:
        c=c+1
print('************************')
print("Number of character:",(c+1)-n)
print("Number of Words:",w+n)
print("Number of lines:",n)
print('************************')
o.close()
o=open('File.txt','r')
r=o.read()
s=str(r)
l=[]
for i in s :
    if i==' ' or i=='\n':
        m=s.index(i)
        s1=s[:m]
        l.append(s1)
        s=s[m+1:]
l.append(s)
o.close()
v=0
w1=open('v.txt','w')
c=0
w2=open('c.txt','w')

for i in l:
    a=i[0]
    if a=='A' or a=='E' or a=='I' or a=='O' or a=='U' or a=='a' or a=='e' or a=='i' or a=='o' or a=='u':
        w1.write(i)
        w1.write('\n')
        v=v+1
    else:
        w2.write(i)
        w2.write('\n')
        c=c+1
w1.write('The Number of Words starting with Vowel:')
w1.write('\n')
w1.write(str(v))
w2.write('The Number of Words starting with Consonant:')
w2.write('\n')
w2.write(str(c))
w1.close()
w2.close()
o1=open('v.txt','r')
o2=open('c.txt','r')
r1=o1.read()
r2=o2.read()
print('v.txt File is:')
print(r1)
print('************************')
print('c.txt File is:')
print(r2)
o1.close()
o2.close()

        



    
  
    
        







    
   
        

    



        



    
        
        
        
    

                
                
        
        

    



