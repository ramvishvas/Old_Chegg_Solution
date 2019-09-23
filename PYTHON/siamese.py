
# starting at the bottom, middle cell. 
# Repeatedly assign the next integer to the cell adjacent diagonally to the right and down. 
# If this cell has already been assigned another integer, 
# instead use the cell adjacently above. 
# Use wrap around to handle border cases.

def siamese(n):
	if n == 1:
		print('1')
		return

	lst = [[0 for _ in range(n)] for _ in range(n)]
	count = 1;
	row = n-1;
	col = n // 2;
	lst[row][col] = count

	for i in range(2, n*n+1):
		if lst[(row+1)%n][(col+1)%n] == 0:
			row = (row+1)%n
			col = (col+1)%n
		else:
			row = (row-1+n)%n;
            # don't change col
		lst[row][col] = i;

	print("*"*n*7,"\n");

	for i in range(n):
		for j in range(n):
			print(lst[i][j],end="\t")
		print("\n")

	print("*"*n*7,"\n");

n = int(input("Enter Odd N : "))
if n%2 != 0:
	siamese(n)
else:
	print("Opps!!! Only Odd Interger Allowed")