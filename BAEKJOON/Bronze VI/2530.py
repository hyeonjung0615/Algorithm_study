a, b, c = map(int, input().split())
d = int(input())


c_sec = (c+d)%60
b_min = (c+d)//60

b_result = (b_min+b) % 60
a_hour = (b_min+b) //60


a_result = (a+ a_hour) % 24


print(a_result, b_result, c_sec)