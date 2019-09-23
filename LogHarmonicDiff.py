from numpy import log
# take input
n = int(input("Enter n : "))
s = 0; #initilize sum = 0
#loop from 1 to n
for i in range(1,n+1):
	# calcute sum
	s = s + (1 / i)
	# print(i)

# get log(n)
logn = log(n)
# calculate absolute difference
diff = abs(logn - s)
#print difference
print("Summation  =",s)
print("log(%d) = %f" %(n, logn))
print("Difference =", diff)