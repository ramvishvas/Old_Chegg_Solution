def solid_diamond(N):
	for i in range(2*N+1):
		for j in range(-N,N+1,1):
			if abs(j) <= i and i <= N:
				print('*', end="")
			elif abs(j) <= N-i%(N+1)-1 and i > N:
				print('*', end="")
			else:
				print(end=" ")
		print()
		
def hollow_diamond(N):
	for i in range(2*N+1):
			for j in range(-N,N+1,1):
				if abs(j) == i and i <= N:
					print('*', end="")
				elif abs(j) == N-i%(N+1)-1 and i > N:
					print('*', end="")
				else:
					print(end=" ")
			print()
			
def checkerboard(N):
	for i in range(N):
		for j in range(N):
			if i%2 == 0:
				if j%2 == 0:
					print('*',end=' ')
				else:
					print('-',end=' ')
			else:
				if j%2 == 0:
					print('-',end=' ')
				else:
					print('*',end=' ')
		print()


def vee(N):
	for i in range(N-1,-1,-1):
		for j in range(N-1,-N,-1):
			if i == abs(j):
				print('*',end='')
			else:
				print(end=' ')
		print()


def x(N):
	for i in range(N-1,-N,-1):
		for j in range(N-1,-N,-1):
			if abs(i) == abs(j):
				print('*',end='')
			else:
				print(end=' ')
		print()

n=int(input('Enter N : '))

solid_diamond(n)
print()

hollow_diamond(n)
print()

checkerboard(n)
print()

vee(n)
print()

x(n)
print()



# "Nested squares" and "Nested right triangles" -> I dont understand the problem can you show me the diagram