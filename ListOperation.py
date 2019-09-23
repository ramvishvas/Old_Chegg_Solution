# eval function will take whole list as input
lst = eval(input("Enter your list : "))
dictonary = {} # define empty dictonary
# iterate through lst
for x in lst:
	# if key is not present in dict then it will give KeyError
	try:
		# get list with key x[1]
		old_list = dictonary[x[1]]
		# now append x[0] to old_list
		old_list.append(x[0])
		# now update the value of key x[1]
		dictonary[x[1]] = old_list
	except KeyError:
		# if key is not present then add that to dictonary
		dictonary[x[1]] = [x[0]]

# now get all value of dictionary and convert it to list
final_list = list(dictonary.values())
# print final_list
print(final_list)

# [(1,4),(5,4),(4,3)]
# [(1,4),(4,3),(5,6)]
# [(1,4),(5,4),(4,3)]