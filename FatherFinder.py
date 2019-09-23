#initilize relation dictoniary
relation = {
	"John Quincy Adams" : "John Adams",
	"Bart Simpson" : "Homer Simpson",
	"Homer Simpson" : "Grandpa Simpson",
	"John Adams" : "John Adams Sr."
}
# print(relation)
#get father name
def printFather():
	name = input("Enter the son: ")
	try:
		print("His father is ",relation[name])
	except KeyError:
		print("Name Not Present")
# get grand father name
def printGrandFather():
	name = input("Enter Name: ")
	try:
		father = relation[name]
		grandFather = relation[father]
		print("His GrandFather is ", grandFather)
	except KeyError:
		print("Error")
# get sons
def printSons():
	print(relation.keys())

while True:
	print("\nFather Finder")
	print("0 - Quit")
	print("1 - Find a Father")
	print("2 - Find a Grandfather")
	print("3 - List Sons")
	
	c = input("Enter Choice : ")
	if c == '0':
		print("So long.")
		break
	elif c ==  '1':
		printFather()
	elif c == '2':
		printGrandFather()
	elif c == '3':
		printSons()
	else:
		print("Invalid Choice")