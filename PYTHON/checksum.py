def sum_digits(s):
	try:
	    return sum(int(x) for x in s) # if x.isdigit())
	except ValueError:
		print("Opps!!! Only String of Digit Allowed")
		return -1;

def ISBN_13(s):
	# check for length of input
	if len(s) == 12:
		# get sum
		t = sum_digits(s)
		# if sum digit is valid
		if t != -1:
			# get last digit
			d = 10 - t % 10
			# if last digit is 10
			if d == 10:
				d = 0;
			#return final ISBN-13
			return s+str(d)
	# if length is not 12
	else:
		print("Opss!!! Enter 12 Digit String")
s = input("Enter Input(12 Digit):")
print("ISBN-13: ",ISBN_13(s))