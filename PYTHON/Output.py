while True:
	inp = input("\nEnter an integer or e to exit : ")
	if inp == 'e':
		break;
	else:
		num1 = int(inp)
		answer = float( int(num1 / 3.3) )
		print("\nfloat( int(num1 / 3.3) )  = ",answer)

		answer = float( (num1 + 1) // 100 )
		print("\nfloat( (num1 + 1) // 100 ) = ",answer)

		answer = int(num1 / 3.3)
		print("\nint(num1 / 3.3) = ",answer)

		answer = num1 / 3.3
		print("\nnum1 / 3.3 = ",answer)

		answer = int( (num1 + 1.5) / 99.9999) / 5
		print("\nint( (num1 + 1.5) / 99.9999) / 5 = ",answer)

		print('-'*50,"\n")

some_var = ord("A") + ord("a") + ord("#")
print("""\nord("A") + ord("a") + ord("#") = """,some_var)
print("\nThank You")