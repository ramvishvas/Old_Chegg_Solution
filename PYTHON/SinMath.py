# Import math library
import math
# Description of program
print("This approximates the value of sin(x)")
print("using a series of terms")
print()
# Prompt the user for starting number of elements
start=int(input("Starting number of elements: "))
# Prompt the user for the ending number of elements
end=int(input("Ending number of elements: "))
# Prompt the user for step
step=int(input("Step: "))
# Prompt the user for Precision
precision=int(input("Precision: "))
# Prompt the user for x
x=float(input("Enter the value of x: "))
# Convert x to radians
x=math.radians(x)
sum=x

print("="*36)
print("#terms              approx            difference")
print("="*36)
# Create a for loop based on the number of elements in the calculation
for i in range(start,end+2,step):
    sum=x # each time we have to reset the value of sum with x
    for y in range(1, i):
        eq=(math.pow(-1,y)*(math.pow(x,2*y+1)/math.factorial(2*y+1)))
        sum=sum+eq
    finalsum = round(sum, precision) # rounding off the sum function
    diff = abs(sum - math.sin(x))	 # getting difference
    diff = round(diff, precision)	 # rounding off diff
    print(i,"\t",finalsum,"\t",diff)
    # abs function will give absolute value of given number
    # round function will round off the number upto given precision
