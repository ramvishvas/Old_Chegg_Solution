# please use python version 3
import sys
# checking did you pass <6 number as an argument
if len(sys.argv) < 6:
	print("Opps!!! Please Chek Command Line Argument")
	sys.exit (1)
# assign first three number to c1 c2 c3
c1 = float(sys.argv[1])
c2 = float(sys.argv[2])
c3 = float(sys.argv[3])
# assign remaining three number to c1 c2 c3
j1 = float(sys.argv[4])
j2 = float(sys.argv[5])
j3 = float(sys.argv[6])

print("Cup dimensions: ",c1,"x",c2,"x",c3)
print("Jug dimensions: ",j1,"x",j2,"x",j3)
ans = (j1*j2*j3) / (c1*c2*c3) # calculating required ans
print("Number of cups that can be filled using the jug: ",int(ans))