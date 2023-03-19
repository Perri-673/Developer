'''a=int(input())
s=0
b=a
c=0
if(a<10):
    s=a
    print(s)
else:
    while (b>0): 
        s=s+b%10
        b=b//10
    if s>=10:
        while (s>0):
            c=c+s%10
            s=s//10
        print(c)
    else :
        print(s)'''



'''import re
a=input()
b=0
c=int(a[6:10])
if c%4==0:
    b=1
if re.match('[0-2][0-9]-0[1,3-9]-[0-9]{4}$',a):
    print('VALID')
elif re.match('00-..-[0-9]{4}$',a) or re.match('..-00-[0-9]{4}$',a) or re.match('..-..-0000$',a) :
    print('INVALID')
elif re.match('[0-2][0-9]-1[1-2]-[0-9]{4}$',a):
    print('VALID')
elif re.match('30-0[1,3-9]-[0-9]{4}$',a):
    print('VALID')
elif re.match('30-1[1-2]-[0-9]{4}$',a):
    print('VALID')
elif re.match('31-0[1,3,5,7,8]-[0-9]{4}$',a):
    print('VALID')
elif re.match('31-1[0,2]-[0-9]{4}$',a):
    print('VALID')
elif re.match('[0-1][1-9]-02-[0-9]{4}$',a):
    print('VALID')
elif re.match('2[0-8]-02-[0-9]{4}$',a):
    print('VALID')
elif re.match('29-02-[0-9]{4}$',a) and b==1:
    print('VALID')
else:
    print('INVALID')'''



n=int(input())
if n<=0:
    print('INVALID DATA')
else:
    if n%2==0:
        a=2
    else:
        a=1
    while a<=n:
        i=a
        j=1
        while j<a:
            i=i*j
            j=j+1
        print(a,i)
        a=a+2


    

            


            
    
   
    
        
    
