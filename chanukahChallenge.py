P = int(input())
for i in range(P):
	K, N = input().split(" ")
	K = int(K)
	N = int(N)
	r = sum(x for x in range(N + 1)) + N
	print("%d %d" % (K, r))