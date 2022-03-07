t = int(input())

if t % 10 !=0:
    print(-1)
else:
    A = B= C = 0
    A = t //300
    B = (t % 300) // 60
    C = (t % 300) % 60 // 10
    print(A, B, C)
