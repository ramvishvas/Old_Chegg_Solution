print("This program creates a list of odd numbers in the range of your choice.")
start_num = int(input("Enter starting number: "))
end_num = int(input("Enter ending number: "))
# this is without any loop, you can check it by removing comments
# my_list = list(range(start_num if start_num%2 == 1 else start_num+1, end_num+1, 2))

#this is with generate expression
my_list = list(x for x in list(range(start_num, end_num+1)) if x%2 == 1)

print("odd numbers in the range:", my_list)