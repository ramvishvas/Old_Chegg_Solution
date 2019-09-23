# if you are not getting correct output please let me know on comment
# input -> Ramvishvas kumar mandal

from tkinter import * # Import tkinter
import tkinter.messagebox # Import tkinter.messagebox
from tkinter.filedialog import askopenfilename

def showResult():pass
	# analyzeFile(filename.get())

def analyzeFile(filename):pass
	# try:
	# 	infile = open(filename, "r") # Open the file
	# 	counts = dict() # Create an empty dictionary counts
	# 	for line in infile:
	# 		# Invoke the countLetters function to count each letter

	# 		# if its case sensitive
	# 		countLetters(line, counts)

	# 		# if its not case sensitive
	# 		# countLetters(line.lower(), counts) 

	# 	# Display results
	# 	for k, v in counts.items():
	# 		text.insert(END, str(k) + " appears " + str(v) + (" time\n" if v == 1 else " times\n"))

	# 	infile.close() # Close file

	# except IOError:
	# 	tkinter.messagebox.showwarning("Analyze File", "File " + filename + " does not exist")  
	# Count each letter in the string

def countLetters(line, counts):pass
	# for ch in line:
	# 	# check if key is already present
	# 	if counts.get(ch) != None: 
	# 		counts[ch] = counts.get(ch) + 1
	# 	# check if key is not present
	# 	# ie new letter found
	# 	else:
	# 		counts[ch] = 1

def openFile():pass
	# filenameforReading = askopenfilename()
	# filename.set(filenameforReading)
def update_text():pass

window = Tk() # Create a window
window.title("Occurrence of Letters") # Set title

frame1 = Frame(window) # Hold four labels for displaying cards
frame1.pack()
text = Text(frame1, width = 45, height = 10, wrap = WORD)
text.pack()

frame = Frame(window) # Hold four labels for displaying cards
frame.pack()
Label(frame, text = "", command = update_text).pack()
Label(frame, text = "Enter your guess: ").pack()
filename = StringVar()
Entry(frame, width = 30, textvariable = filename).pack()
Button(frame, text = "Enter", command = showResult).pack()
window.mainloop() # Create an event loop