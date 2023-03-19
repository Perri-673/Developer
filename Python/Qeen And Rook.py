'''rr=int(input())
rc=int(input())
qr=int(input())
qc=int(input())
rp=(rr,rc)
qp=(qr,qc)
s1=set()
s2=set()
s3=set()
s4=set()
s5=set()
s5=set()
s6=set()
s7=set()
s8=set()
for i in range(1,9):
    if rr!=i:
        s1.add((i,rc))
for i in range(1,9):
    if rc!=i:
        s2.add((rr,i))
for i in range(1,9):
    if qr!=i:
        s3.add((i,qc))
for i in range(1,9):
    if qc!=i:
        s4.add((qr,i))
a=qr+1
b=qc+1
for i in range(8):
    if a<=8 and b<=8:
        s5.add((a,b))
        a=a+1
        b=b+1
a=qr-1
b=qc-1
for i in range(8):
    if a>=1 and b>=1:
        s6.add((a,b))
        a=a-1
        b=b-1
a=qr+1
b=qc-1
for i in range(8):
    if a<=8 and b>=1:
        s7.add((a,b))
        a=a+1
        b=b-1
a=qr-1
b=qc+1
for i in range(8):
    if a>=1 and b<=8:
        s8.add((a,b))
        a=a-1
        b=b+1
print(s1.intersection(s3))
print(s1.intersection(s4))
print(s1.intersection(s5))
print(s1.intersection(s6))
print(s1.intersection(s7))
print(s1.intersection(s8))
print(s2.intersection(s3))
print(s2.intersection(s4))
print(s2.intersection(s5))
print(s2.intersection(s6))
print(s2.intersection(s7))
print(s2.intersection(s8))'''



def isomorphic(number):
    number_list = list(map(int,str(number)))
    length = len(number_list)
    common_pos = []
    temp_pos = []
    for i in range(len(list(set(number_list)))):
        if number_list.count(number_list[i]) >= 2:
            for j in range(len(number_list)):
                if number_list[i] == number_list[j]:
                    temp_pos.append(j)
            common_pos.append(temp_pos)
            temp_pos = []
    return length,common_pos
final_num_list = [number]
count = 0
final_list = []
first_number = isomorphic(number)
for i in range(n-1):
    temp = int(input())
    if first_number == isomorphic(temp) and first_number[0] == isomorphic(temp)[0] and isomorphic(temp)[1]:
        if final_list == []:
            final_list.append(number)
        final_list.append(temp)
        count += 1

    

                
    
            

    


    
    
        
    


            




