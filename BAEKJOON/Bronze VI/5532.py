l = int(input())
a = int(input())
b = int(input())
c = int(input())
d = int(input())

a1 = 0 
b1 = 0

if a % c != 0:
    a1 = a // c + 1
else:
    a1 = a // c

if b % d != 0:
    b1 = b // d + 1
else:
    b1 = b // d

print(l - max(a1, b1)) 

# ceil 반올림 함수