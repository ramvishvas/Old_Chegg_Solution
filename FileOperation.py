# get quater 1 as key
def sortOne(val):
	return val[1][0]
# get quater 2 as key
def sortThree(val):
	return val[1][2]
# get total revenue as key
def sortTotalRevenue(val): 
	return val[2]

def revenue(filename):
	lst = [];
	with open(filename,'r') as f:
		# read file and split each line and store into list
		lst = str(f.read()).split("\n")
	# conver string revenue into integer
	for i in range(len(lst)):
		t = lst[i].split();
		lst[i] = [t[0], list(map(int,t[1:]))]

	# append sum and average into list
	for i in range(len(lst)):
		t = lst[i][1]
		lst[i].append(sum(t)) 
		lst[i].append(sum(t)/len(t))

	# adjust the list according to your printing requireent
	newlst = []
	newlst.append(lst[5])
	newlst.append(lst[2])
	newlst.append(lst[0])
	newlst.append(lst[1])
	newlst.append(lst[4])
	newlst.append(lst[6])
	newlst.append(lst[3])
	lst = newlst

	# print list
	print("%-11s %-21s %-7s %s" %("City", "Revenue", "Total", "Average"))
	for i in range(len(lst)):
		print("%-10s "%(lst[i][0].strip('"\'')), lst[i][1],"    " , lst[i][2], "    %0.2f"%(lst[i][3]))

	# sort according to quater 1 revenue print
	print("\nSort the cities by their Quater 1 revenue.")
	lst.sort(key = sortOne) 
	print([item[0] for item in lst])

	# sort according to quater 1 revenue and print 
	print("\nSort the cities by their Quater 3 revenue.")
	lst.sort(key = sortThree) 
	print([item[0] for item in lst])	
	
	# sort according to quater total revenue and print
	print("\nSort the cities by their total revenue.")
	lst.sort(key = sortTotalRevenue) 
	print([item[0] for item in lst])


# filename = input("Enter file Name : ")
filename = "revenue.txt"
revenue(filename)