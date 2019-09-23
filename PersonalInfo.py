def getPerosnalInfo(dictionary, personlID):
	if personlID in dictionary:
		# print(dictionary)
		return dictionary[personlID]

def getAddressInfo(dictionary, personlID):
	if personlID in dictionary:
		# print(dictionary)
		return dictionary[personlID][6:]


def TestDrive():
	dictionary = dict()

	while True:
		choice = input("Enter your choice(add, delete, update, search or exit) : ")
		print()
		if choice == "exit":
			break

		elif choice == "add":
			personlId = input("Enter id of the person : ")
			if personlId in dictionary:
				print("Opss!!! this id is already present")
				continue;
			fName = input("Enter First Name of person : ")
			mName = input("Enter Middle Name of person : ")
			lName = input("Enter last name of person : ")
			age = int(input("Enter age of person : "))
			height = float(input("Enter height of person : "))
			addr = input("Enter street address of person : ")
			city = input("Enter City of person : ")
			stat = input("Enter State of person : ")
			zipcode = input("Enter Zip code of person : ")
			dictionary[personlId] = [personlId,fName, mName, lName, age, height, addr, city, stat, zipcode]

		elif choice == "delete":
			personlId = input("Enter id of the person : ")
			if personlId in dictionary:
				del dictionary[personlId]
			else:
				print("personlId not present")

		elif choice == "update":
			personlId = input("Enter id of the person : ")
			if personlId in dictionary:
				fName = input("Enter First Name of person : ")
				mName = input("Enter Middle Name of person : ")
				lName = input("Enter last name of person : ")
				age = int(input("Enter age of person : "))
				height = float(input("Enter height of person : "))
				addr = input("Enter street address of person : ")
				city = input("Enter City of person : ")
				stat = input("Enter State of person : ")
				zipcode = input("Enter Zip code of person : ")
				dictionary[personlId] = [personlId,fName, mName, lName, age, height, addr, city, stat, zipcode]
			else:
				print("personlId not present")

		elif choice == "search":
			personlId = input("Enter id of the person : ")
			if personlId in dictionary:
				print(dictionary[personlId])
			else:
				print("personlId not present")
		else:
			print("Opss... Invalid Choice")
			continue;

	print(getAddressInfo(dictionary, '1'))
	print(getPerosnalInfo(dictionary, '1'))

TestDrive()
