def readData(filename):
	lst = [];
	with open(filename,'r') as f:
		# read file and split each line and store into list
		lst = str(f.read()).replace('\"','').split("\n")

	for i in range(len(lst)):
		t = lst[i].split(','); 
		t[2] = t[2]+","+t[3];
		del t[3]
		lst[i] = t
	return lst

def showAll(lst):
	print() # for newline
	for i in range(len(lst)):
		print(lst[i])
	print() # for newline

def showAllByPersonName(lst, name):
	print() # for newline
	for i in range(len(lst)):
		if lst[i][0] == name:
			print(lst[i])
	print() # for newline


def showAllBySpeciesName(lst, name):
	print() # for newline
	for i in range(len(lst)):
		t = lst[i][len(lst[i])-1]
		if t == name:
			print(lst[i])
	print() # for newline


#=========================================================================================
#Display a menu of options for the user to choose from
#=========================================================================================

print ("\nWildlife Information Management")
print ("======== Selection Menu =======")
print (31*'=')
print ("1. Show all Observations")
print ("2. Show Observations for a person")
print ("3. Show Observations for a species")
print ("4. Add to Observations")
print ("5. Exit")

dataList = readData("Wildlife.txt")
while True:
	## Get input ###
	selection = input('Enter your selection [1-5] : ')

	if selection == '1':
		showAll(dataList)

	elif selection == '2':
		name = input("Enter person name : ")
		showAllByPersonName(dataList, name)

	elif selection == '3':
		name = input("Enter species name : ")
		showAllBySpeciesName(dataList, name)


	elif selection == '4':
		observer = input("Enter observer name: ")
		time = input("Enter a time: ")
		date = input("Enter a date: ")
		location = input("Enter a location name: ")
		latitude = input("Enter a Latitude: ")
		longitude = input("Enter a Longitude: ")
		species = input("Enter species name : ")

		t = [observer, time, date, location, latitude, longitude, species]
		dataList.append(t)
		print()

	elif selection == '5':
		break
	else:
		print("Oops!!! Invalid Choice")