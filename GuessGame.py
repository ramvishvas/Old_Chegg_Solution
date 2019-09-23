import random
def playGame():
	Ans = int(random.randint(1,101))
	guessCount = 1 # initial guess count is 1
	print("I've thought of a number from 1 through 100.")
	guess = input("Guess the number: ")
	while True:
		# check input
		try:
			guess = int(guess)
			#handle error
		except ValueError:
			print("You did not enter a number")
			guess = input("Try again: ")
			# increment guessCount and continue
			guessCount = guessCount + 1
			continue
		# if guess is correct
		if guess == Ans:
			print("Correct. You took",guessCount,"guesses")
			break
		#check range of value
		elif guess >= 1 and guess <= 100:
			# check is guess bigger
			if guess > Ans:
				print("Too high")
			#else guess is lower
			else:
				print("Too low")
		# if guess is out of range
		else:
			print("Number must be from 1 through 100.")

		guess = input("Try again: ")
		guessCount = guessCount + 1
playGame()
