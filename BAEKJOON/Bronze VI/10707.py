xa = int(input())
yb = int(input())
yc = int(input())
yd = int(input())
p = int(input())

aa = xa * p

if yc < p:
    bb = yb+((p-yc)*yd)
else:
    bb = yb

print(min(aa, bb))