#use python3
def f(x):
	return A*(x**3) + B*(x**2) + C*x + D

def bisection(a, b, t):
	if (f(a) * f(b) >= 0):
		print("\nYou have not assumed right (a, b)")
		return
	#get midpoint value
	mid = (a+b)/2.0
	# excute loop till the tollerence is more than given tollerence t
	while (b-a)/2.0 > t:
		#check is midpoint root
		if f(mid) == 0:
			return mid
		# a > b we know becoz its interval
		# Decide the side to repeat the steps 
		elif f(a)*f(mid) < 0:
			b = mid
		else :
			a = mid
		mid = (a+b)/2.0

	return mid

print("F(x) = Ax^3 + Bx^2 + Cx + D")
A = float(input("Enter A : "))
B = float(input("Enter B : "))
C = float(input("Enter C : "))
D = float(input("Enter D : "))
print("\nInterval : (a, b)")
a = float(input("Enter a : "))
b = float(input("Enter b : "))
t = float(input("\nEnter Tollerance : "))
print("Solution is : ",bisection(a, b, t))