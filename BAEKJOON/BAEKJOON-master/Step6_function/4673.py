total = set(range(1, 10001))
delete = set()


for i in range(1, 10001):
	for j in str(i):
		i += int(j)
	delete.add(i)

total = total - delete

for i in sorted(total):
	print(i)
