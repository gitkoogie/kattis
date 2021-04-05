W = int(input())
n = int(input())
sq = 0
for i in range(n):
	w, l = input().split(" ")
	sq = sq + int(w) * int(l)
print(int(sq/W))	