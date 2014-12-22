t = int(raw_input())
for i in range(0, t):
        n = int(raw_input())
        fact = 1
        while(n > 0):
                fact = fact * n
                n = n - 1
        print fact

