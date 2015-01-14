t = int(raw_input())
for i in range(0, t):
    	a  = raw_input()
	if "+" in a:
		l = a.split('+')
		print int(l[0]) + int(l[1])
	elif "-" in a:
		l = a.split('-')
		print int(l[0]) - int(l[1])
