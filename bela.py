def dominant(s, cards):
	if cards[0] == 'A':
		return 11
	elif cards[0] == 'K':
		return 4
	elif cards[0] == 'Q':
		return 3
	elif cards[0] == 'J':
		if cards[1] == s:
			return 20
		else:
			return 2
	elif cards[0] == 'T':
		return 10
	elif cards[0] == '9':
		if cards[1] == s:
			return 14
		else: 
			return 0
	elif cards[0] == '8':
		return 0
	elif cards[0] == '7':	
		return 0

n, s = str(input()).split(' ')

sum = 0
for i in range(int(n)*4):
	cards = [card for card in str(input())]
	# descriptor + suit
	sum = sum + dominant(s, cards)
print(sum)