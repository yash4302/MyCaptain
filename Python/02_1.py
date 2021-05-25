pre = 0
cur = 1

n = int(input("Enter N : "))
i = 0

print(pre)
i += 1

while i < n:
	i += 1
	print(cur)
	pre, cur = cur, pre+cur
