# Stack.py
class Stack:

    #------------------------------------------------------------

    def __init__(self):

        '''post: creates an empty LIFO stack'''

        self.items = []
    #------------------------------------------------------------

    def push(self, item):
        
        '''post: places x on top of the stack'''

        self.items.append(item)
    #------------------------------------------------------------

    def pop(self):

        '''post: removes and returns the top element of 
        the stack'''

        return self.items.pop()

    #------------------------------------------------------------

    def top(self):

        '''post: returns the top element of the stack without 
        removing it'''

        return self.items[-1]

    #------------------------------------------------------------

    def size(self):

        '''post: returns the number of elements in the stack'''

        return len(self.items)


# The main function that converts given infix expression 
# to postfix expression 
def evalpostfix(expr):
    token_list = expr.split(" ")
    # print(token_list)
    stack = Stack()
    for token in token_list:
        if token == "+":
            sum = stack.pop() + stack.pop()
            stack.push(sum)

        elif token == "*":
            product = stack.pop() * stack.pop()
            stack.push(product)

        elif token == "-":
            v1 = stack.pop() 
            v2 = stack.pop()
            stack.push(v2 - v1)

        elif token == "/":
            v1 = stack.pop()
            v2 = stack.pop()
            stack.push(v2 / v1)

        else:
            num = int(token)
            stack.push(num)
            # print(token)

    return stack.pop()
    # print(stack)
    return 0
# Driver program to test above function 
print("Exp format : 2 3 - 1 * -9 + 2 * 9 +")
exp = input("Enter expression : ")
value = evalpostfix(exp)
print (value)