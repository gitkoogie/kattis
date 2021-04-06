L = int(input())
D = int(input())
X = int(input())

min = None
max = None

for i in range(L, D+1):
	temp = [int(d) for d in str(i)]
	if sum(temp) == X and min is None:
		dummy = [str(k) for k in temp]
		min = int("".join(dummy))

	if sum(temp) == X:
		dummy = [str(k) for k in temp]
		max = int("".join(dummy))

print(min)
print(max)