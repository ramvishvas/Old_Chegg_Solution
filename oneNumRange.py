def  oneNumRange(x):
	if x < 1 or x > 99:
		print("number out of bound")
		return;
	lst = [0,0,0,0,0,0,0,0,0,0]
	if x <= 10:
		lst[0] = 1
	elif x <= 20:
		lst[1] = 1
	elif x <= 30:
		lst[2] = 1
	elif x <= 40:
		lst[3] = 1
	elif x <= 50:
		lst[4] = 1
	elif x <= 60:
		lst[5] = 1
	elif x <= 70:
		lst[6] = 1
	elif x <= 80:
		lst[7] = 1
	elif x <= 90:
		lst[8] = 1
	else:
		lst[9] = 1
	return lst;

print(oneNumRange(5))
print(oneNumRange(10))
print(oneNumRange(99))