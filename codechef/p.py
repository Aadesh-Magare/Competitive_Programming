t = int(raw_input())
for i in range(0, t):
	n = int(raw_input())
	fact = 1
	count = 0
	while(n > 0):
		fact = fact * n
		n = n - 1
	while(fact > 0 and (fact % 10 == 0)):
		fact = fact / 10
		count = count + 1
	print count



	
