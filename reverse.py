n = int(input())

l = []
for i in range(n):
	l.append(input())

l.reverse()
for i in range(len(l)):
	print(l[i])