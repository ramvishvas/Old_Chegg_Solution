from turtle import *
def part_one():
	# asiigning value of a, b and c
	a, b, c = 3, 4, 5
	if a < b: #true if a if less than b
		print('OK')

	if c < b: #true if c is less than b
		print('OK')

	if a+b == c: #true if a+b is equals to c
		print('OK')

	if a*a + b*b == c*c: #true if a^2 + b^2 == c^2
		print('OK')

def part_two():
	a, b, c = 3, 4, 5
	if a < b:
		print('OK')
	else: #this will excute if 'if' fails
		print('NOT OK')

	if c < b:
		print('OK')
	else:
		print('NOT OK')

	if a+b == c:
		print('OK')
	else:
		print('NOT OK')

	if a*a + b*b == c*c:
		print('OK')
	else:
		print('NOT OK')

def print_line(color, width, length):
	t = Turtle()
	t.pencolor(color)   #making colour of the pen same as given
	t.pensize(width)	#making width of the pen same as given
	t.forward(length)   #making a line of given length
	t.ht()

def print_triangle(color, width, length):
	t = Turtle()
	t.pencolor(color)   #making colour of the pen same as given
	t.pensize(width)	#making width of the pen same as given
	t.forward(length)   #making a line of given length
	t.right(120)		#turn 120 degree right
	t.forward(length)   #making a line of given length after turning
	t.right(120)		#again turn 120 degree right
	t.forward(length)   #making a line of given length after turning
	t.ht()              #hide cursor

def print_square(color, width, length):
	t = Turtle()
	t.pencolor(color)   #making colour of the pen same as given
	t.pensize(width)	#making width of the pen same as given
	t.forward(length)   #making a line of given length
	t.left(90)          #turn 90 degree left 
	t.forward(length)   # drawing line after turning
	t.left(90)			# agaib turn 90
	t.forward(length)	# again drawing line
	t.left(90)			# turn 90 (in the case of turning curson will be at same posotion)
	t.forward(length)   
	t.left(90)
	t.ht()              #hide cursor

def start():
	color = input('what color? ')
	width = int(input('what line width? '))
	length = int(input('what line length? '))
	shape = input('line, triangle or square? ')

	if shape == 'line':
		print_line(color, width, length)
	elif shape == 'triangle':
		print_triangle(color, width, length)
	elif shape == 'square':
		print_square(color, width, length)
	else:
		print("Invalid Choice")

part_one()
print()
part_two()

# creating a screen
canvas = Screen()
canvas.setup(600,400)
start() #calling start function
canvas.exitonclick() #close screen after clicking