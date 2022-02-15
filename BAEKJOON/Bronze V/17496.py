n, t, c, p = map(int , input().split())

result = (n // t) * c * p

if n % t == 0:
    result = ((n // t) - 1) * c * p

print(result)