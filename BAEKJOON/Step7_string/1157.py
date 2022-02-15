ss = input().upper()
s1 = list(set(ss))
s2 = []


for i in s1:
    count = ss.count(i)
    s2.append(count)

if s2.count(max(s2)) > 1:
    print("?")
else:
    print(s1[(s2.index(max(s2)))])

   
