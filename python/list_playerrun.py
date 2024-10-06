t1=[0]

t1.append(23)
t1.append(34)
t1.append(56)
t1.append(98)
t1.append(1)
t1.append(3)

t2=[1,9,4,0]
t1.extend(t2)
s=sum(t1)

print(t2)
print("total team runs = ",s)
print(max(t2))
print(min(t2))
