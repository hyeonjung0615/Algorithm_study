sum ,sub = map(int, input().split())

if sum+sub < 0 or sum-sub < 0 or (sum+sub) % 2:
    print(-1)
else:
    a = (sum+sub) //2
    b = sum - a
    print(max(a,b), min(a,b))