day = int(input())
carN = list(map(int, input().split()))

sum = 0

for i in carN:
    if i == day:
        sum += 1
print(sum)