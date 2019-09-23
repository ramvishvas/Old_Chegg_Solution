# if you are not getting correct output please let me know on comment
# input -> Ramvishvas kumar mandal

from tkinter import * # Import tkinter
import tkinter.messagebox # Import tkinter.messagebox
from tkinter.filedialog import askopenfilename

def showResult():
	analyzeFile(filename.get())

def analyzeFile(filename):
	try:
		infile = open(filename, "r") # Open the file
		counts = dict() # Create an empty dictionary counts
		for line in infile:
			# Invoke the countLetters function to count each letter

			# if its case sensitive
			countLetters(line, counts)

			# if its not case sensitive
			# countLetters(line.lower(), counts) 

		# Display results
		for k, v in counts.items():
			text.insert(END, str(k) + " appears " + str(v) + (" time\n" if v == 1 else " times\n"))

		infile.close() # Close file

	except IOError:
		tkinter.messagebox.showwarning("Analyze File", "File " + filename + " does not exist")  
	# Count each letter in the string

def countLetters(line, counts):
	for ch in line:
		# check if key is already present
		if counts.get(ch) != None: 
			counts[ch] = counts.get(ch) + 1
		# check if key is not present
		# ie new letter found
		else:
			counts[ch] = 1

def openFile():
	filenameforReading = askopenfilename()
	filename.set(filenameforReading)

window = Tk() # Create a window
window.title("Occurrence of Letters") # Set title

frame1 = Frame(window) # Hold four labels for displaying cards
frame1.pack()
scrollbar = Scrollbar(frame1)
scrollbar.pack(side = RIGHT, fill = Y)
text = Text(frame1, width = 45, height = 30, wrap = WORD,yscrollcommand = scrollbar.set)
text.pack()
scrollbar.config(command = text.yview)

frame2 = Frame(window) # Hold four labels for displaying cards
frame2.pack()
Label(frame2, text = "Enter a filename: ").pack(side = LEFT)
filename = StringVar()
Entry(frame2, width = 30, textvariable = filename).pack(side = LEFT)
Button(frame2, text = "Browse", command = openFile).pack(side = LEFT)
Button(frame2, text = "Show Result", command = showResult).pack(side = LEFT)
window.mainloop() # Create an event loop