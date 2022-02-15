num = int(input())
result=[]

for i in range(1, num+1):
    arr=[]
    if i < 100:
        result.append(i)

    else:
        for j in str(i):
            arr.append(int(j))
        a = arr[0]-arr[1]
        b = arr[1]-arr[2]

        if a == b:
            result.append(i)
print(len(result))