suje = [] 
for _ in range(6):  
    suje.append(int(input())) 
suje1 = sorted(suje[:4]) 
suje2 = suje[4:] 
print(sum(suje1[1:]) + max(suje2))