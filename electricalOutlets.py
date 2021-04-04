n = int(input())
for i in range(n):
	string = str(input())
	temp = string.split()
	temp = [int(val) for val in temp]
	print(sum(temp[1:])-len(temp[1:])+1)