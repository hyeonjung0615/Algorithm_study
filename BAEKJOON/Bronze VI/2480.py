from typing import Counter


a, b, c = map(int, input().split())

list = []

list.append(a)
list.append(b)
list.append(c)

if a == b == c:
    print(int(10000+a*1000))
elif a == b:
    print(1000+a*100)
elif b == c:
    print(1000+b*100)
elif c == a:
    print(1000+c*100)
elif a != b != c:
    print(max(list)*100)


