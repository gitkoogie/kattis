n = int(input())
if n % 2 != 0:
	print("still running")
else:
	running = False
	counter = 0
	for i in range(n):
		if running is False:
			last = int(input())
			running = True
		else:
			new = int(input())
			counter = counter + new - last
			running = False
	print(counter)