def pwr(i , j, m):
	if(j == 0):
		return 1
	if(j == 1):
		return i
	x = pwr(i, j/2, m)
	x = (x * x )
	if(j & 1):
		return (x * i)
	return x	

def fun(n):
	if(de[n]):
		return de[n]
	ans = 1
	for i in range(1, n+1):
		ans = ans * db[i]
		de[i] = ans
	return de[n]
	
t = int(raw_input())
db = [0 for i in range(100000)]
de = [0 for i in range(100000)]
for i in range(0, t):
    	n, m, q = [int(x) for x in raw_input().split()]
	for j in range(1, n+1):
		if(db[j] == 0):
			db[j] = pwr(j, j, m)
	for k in range(0, q):
		r = int(raw_input())
		ans2 = fun(r)
		ans3 = 1
		for x in range(0, r):
			ans3 = ans3 * db[n-x]
		print (ans3 / ans2) % m
