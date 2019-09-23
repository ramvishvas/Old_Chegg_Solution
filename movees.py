movies= [[1965, 'The Sound of Music', 'musical'],
		[1972, 'The Godfather', 'drama'],
		[1977, 'Annie Hall', 'comedy'],
		[1990, 'Dances with Wolves', 'western'],
		[1992, 'Unforgiven', 'westerm'],
		[1994, 'Foest Gump', 'comedy'],
		[1995, 'Braveheart', 'historical'],
		[1997, 'Titanic', 'historical'],
		[1998, 'Shakespeare in Love', 'comedy'],
		[2000, 'Gladiator', 'action'],
		[2002, 'Chicago', 'musical'],
		[2009, 'The Hurt Locker', 'action'],
		[2010, 'The Kings Speech', 'historical'],
		[2011, 'The Artist', 'comedy'],
		[2012, 'Argo', 'historical'],
		[2013, '12 Years a Slave', 'drama'],
		[2014, 'Birdman', 'comedy'],
		[2015, 'Spotlight', 'drama'],
		[2016, 'Moonlight', 'drama'],
		[2017, 'The Shape of Water', 'fantasy']]

menu = """
	1 - display winning movie by year
	2 - display movie and category by year
	3 - add movie and category to list
	p - print movie list
	q - quit

  Select one of the menu options above
"""
def printMenu():
	print(menu)

def displayMoviesByYear():
	for x in movies:
		print(x[1])

def displayMoviesAndCategoryByYear():
	for x in movies:
		print(x[1],"\t",x[2])

def printMoviesList():
	for x in movies:
		print(x)

while True:
	printMenu()
	inp = input()
	if len(inp) == 1:
		if inp == '1':
			year= input('Enter year : ')
			if year.isdigit():
				pass
			else:
				print("Opss!!! Wrong year selection")
		elif inp == '2':
			pass
		elif inp == '3':
			pass
		elif inp == 'p':
			pass
		elif inp == 'q':
			break
		else:
			print("Opss!!! Wrong Choice. Try Again")

	else:
		print("Opss!!! Wrong Choice. Try Again")