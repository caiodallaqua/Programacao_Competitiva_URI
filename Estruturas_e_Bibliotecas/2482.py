d, n = {}, int(input())
for i in range(n):
	a, b = input(), input()
	d[a] = b
n = int(input())
for i in range(n):
	a, b = input(), input()
	print(a, d[b], sep='\n', end='\n\n')
