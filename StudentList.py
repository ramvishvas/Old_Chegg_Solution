students = [("White", "Snow", 9, "F", 3.56), 
("Sprat", "Jack", 12, "M", 2.0), 
("Contrary", "Mary", 9, "F", 3.674), 
("Dumpty", "Humpty", 11, "M", 2.342), 
("Bunny", "Easter", 10, "M", 4.233),
("Wonderland", "Alice", 10, "F", 3.755), 
("Bunyon", "Paul", 11, "M", 1.434), 
("Penny", "Henny", 9, "F", 2.54), 
("Hatter", "Mad", 11, "M", 4.522), 
("Munk", "Chip", 10, "M", 3.0), 
("Hood", "Red Riding", 10, "F", 3.137), 
("Bunny", "Bugs", 11, "M", 2.12), 
("Duck", "Daffy", 11, "M", 3.564), 
("Ant", "Atom", 12, "M", 3.333), 
("Mouse", "Mickey", 10, "M", 3.975), 
("Brown", "Charlie", 9, "M", 1.25)]

while True:
  print("""
  1.   School List
  2.   Sophomores
  3.   Juniors
  4.   Above Average Students
  5.   Alphabetical List
  6.   Highest and Lowest GPA
  7.   Find Student
  8.   Exit (Loop the menu – Extra Credit)
  """)
  ans=input("What would you like to do? ")
  if ans=="1":
    for a,b,c,d,e in students:
      print(b,a,",","Grade",c)
  elif ans=="2":
    print("")
  elif ans=="3":
    print("")
  elif ans=="4":
    print("")
  elif ans=="5":
    print("")
  elif ans=="6":
    print("")
  elif ans=="7":
    print("")
  elif ans=="8":
    print("Goodbye")
    break
  else:
    print(" Not Valid Choice Try again")