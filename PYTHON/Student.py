Dict = {} # empty dictonary for storing stident record
lst = []  # empty list for storing each student marks
choice = "yes" # default choice for nadding student is yes
while choice == "yes":
    # taking name of student as input
    Name = input("Enter name of a student : ")
    while True:
        try:
            # taking grade and appending it into lst if its a number
            grade = int(input("Enter a Grade for {} : ".format(Name)))
            lst.append(grade)
        except ValueError:
            # if enter grade is not a number
            # add Name and their mark lst to Dict
            Dict[Name] = lst
            # reset list
            lst=[]
            # break inner while
            break
    
    choice = input("Do you want to add another student : ")
    print()

print("Student Status:")
# iteration over key and value pair
for k,v in Dict.items():
    Name = k
    # gettting max min and avg
    Max = max(v)
    Min = min(v)
    Avg = sum(v) / len(v)
    # printing required output
    print("{} ({}-{}) : {}".format(Name,Min,Max,Avg))