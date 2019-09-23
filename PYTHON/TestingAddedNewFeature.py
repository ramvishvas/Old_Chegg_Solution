# if you have any doubt ask in comment
# .......................................
#  in this block required code is added 
# .......................................
# comment line 16 ie help(print) if you dont want it or press q to exit help
# give it a thumbs up

from __future__ import print_function, division
def demo1():
    print("\nDEMO 1: The __future__ import must be  the very first line in your code.")
    print("After importing print_function from  __future__, print must be used like a method")
    print("The type of 'print' is now: ", type(print))
    print("Is the new print callable?  ", callable(print))

    print("\nLet's get the help on the new print")
    help(print) # comment it if you dont want help or press q to exit help


def demo2():
    print("\nDEMO 2: Optional and Mandatory release info for division and print_function")

    print("\nA. The new division operator")
    # Mandatory and optional release info for division.
    mandatory = division.getMandatoryRelease()
    optional = division.getOptionalRelease()
    print("The new division is mandatory in release:\t\t", mandatory)
    print("The new division became optional in release:\t", optional)
    print("Here is an example of the new division:\t\t\t 9/10 evaluates to -->", 9 / 10)
    print("To still perform floor division use:\t\t\t 9//10 evaluates to -->", 9 // 10)

    # Now add similar code to print out the mandatory and optional release info for print_function.
    print("\nB. The new print_function method.")
    # ..................................................................
    # added print statement
    print("The new print_function is mandatory in release:\t\t", print_function.getMandatoryRelease())
    print("The new print_function became optional in release:\t", print_function.getOptionalRelease())
    # .................................................................
    # add code to print the message as RESPECT: R-E-S-P-E-C-T
    message = "RESPECT"
    print("\n", message, ": ", sep="", end="")  # here's a start. add more
    # ..................................................................
    # added print statement
    # if it is last character print it without - 
    # else print character with end equals to - 
    for i in range(len(message)):
        if i == len(message)-1:
            # printing a character without -
            print(message[i], sep="", end="\n")
        else:
            # printing a character with end equals to -
            print(message[i], sep="", end="-")
    # .................................................................

if __name__ == "__main__":
    demo1()
    demo2()