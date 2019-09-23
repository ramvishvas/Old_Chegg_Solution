class Account(object):
	# constructor, store the information into instance variable
	def __init__(self, name, password, balance = 0):
		self.name = name
		self.password = password
		self.balance = balance
	# print account info
	def Print(self):
		print("Details :",self.name, self.password, self.balance)
	# withdraw method
	def withdraw(self, password, balance):
		# check password
		if self.password == password:
			# check withdrawal amount is greater than current balance or not
			if self.balance >= balance:
				# update balance
				self.balance = self.balance - balance
				# print receipt
				print("Withdrawal of", balance,"is successful, Balance :",self.balance)
			else:
				print("Insufficient Balance")
		# print error if password is not matching
		else:
			print("Oops!!! Invalid Password")
	# depoit method
	def deposit(self, password, balance):
		# check password
		if self.password == password:
			# check deposit amount is positive or not
			if balance >= 0:
				# update balance
				self.balance = self.balance + balance
				# print receipt
				print("Deposit of", balance,"is successful, Balance :",self.balance)
			else:
				print("Invalid Ammount")
		# print error if password is not matching
		else:
			print("Oops!!! Invalid Password")



obj = Account("Ramvishvas", "PASSWORD", 5000)
obj.Print()
obj.withdraw("PASSWORD", 10000)
obj.withdraw("PASSWORD",1000)
obj.withdraw("PASSWOR",1000)
print()

obj.Print()
obj.deposit("PASSWORD", 10000)
obj.deposit("PASSWORD", -1000)
obj.withdraw("PASSWOR",1000)

print()
obj.Print()

		