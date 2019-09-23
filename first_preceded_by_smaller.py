# if you have any doubt just ask plz rate my work
def first_preceded_by_smaller(items, k=1):
	# starts from first index to last
	for i in range(len(items)):
		# sort list till index i and get index of currect item
		# if index >= k return that item
		if sorted(items[0:i+1]).index(items[i]) >= k:
			return items[i]
	# else return None
	return None

items = eval(input("Enter list : "))
k = int(input("Enter k : "))
print(first_preceded_by_smaller(items, k))

# [42, 99, 16, 55, 7, 32, 17, 18, 73]
# ['bob', 'carol', 'tina', 'alex', 'jack', 'emmy', 'tammy', 'sam', 'ted']
# [9,8,7,6,5,4,3,2,1,10]
# [42,99,17,3,12]