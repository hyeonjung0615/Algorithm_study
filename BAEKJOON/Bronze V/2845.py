L, P = map(int, input().split())

arr = list(map(int,input().split()))


i = L * P

for num in arr:
    print(int(num-i))