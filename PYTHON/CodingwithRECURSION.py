#qn 1
def maxList(lst):
	#check if list is empty
	if len(lst) == 0:
		return None;
	#if list has only one elem then return that elem
	elif len(lst) == 1:
		return lst[0]
	# recursive call with remaining lst and
	# return max among 1st num and max of remaining list
	return max(lst[0], maxList(lst[1:]))

#qn 2
def count(s, token):
	#check is list empty and return 0
	if len(s) == 0:
		return 0
	#if list has 1 elem
	elif len(s) == 1:
		# if match return 1
		if s[0] == token:
			return 1;
		#if not match return 0
		else:
			return 0;
	else:
		#recursive step
		if s[0] == token:
			return 1 + count(s[1:], token)
		else:
			return count(s[1:], token)

#qn 3
def f(n):
	if n < 3:
		return n
	# recursive call
	return 3*f(n-1)+2*f(n-2)+f(n-3)


print('maxList Output: ',maxList([5,7,4,6,4,2,8,3]))
print('count Output  : ',count("Hello World!", "o") )
print(f(1))
print(f(7))
print(f(25))