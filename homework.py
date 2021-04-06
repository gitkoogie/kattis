prob = str(input()).split(';')

num = 0
for p in prob:
	if '-' in p:
		temp = p.split('-')
		for i in range(int(temp[0])-1, int(temp[1])):
			num += 1 
	else:
		num += 1
print(num)