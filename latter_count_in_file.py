def CountLetterInFile(filename):
	dictionary = {}
	with open(filename,'r') as f:
		# read file and convert to lowercase
		read = str(f.read()).lower()
		# extraxt string without special character
		string = ''.join(c for c in read if c.isalnum())
	# print(string)
	# count ocuurence
	for key in string:
		if key in dictionary.keys():
			dictionary[key] += 1
		else:
			dictionary[key] = 1
	# print result
	for key, value in dictionary.items():
		print(key,": ",value)
		
CountLetterInFile("CountLetterInFile.txt")