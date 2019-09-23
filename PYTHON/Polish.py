import re

class Stack:
    def __init__(self):
        self.items = []
        
    def isEmpty(self):
        return self.items == []
    
    def push(self, item):
        self.items.append(item)
        
    def pop(self):
        if not self.isEmpty():
            return self.items.pop()
    
    def peek(self):
        return self.items[len(self.items)-1]
    
    def size(self):
        return len(self.items)
        
exp = input("Enter Expression : ")
lst = re.findall('[+-/*//()]|\d+', exp)
num = Stack()
op = Stack()
for x in lst:
    if x == '*' or x == '+':
        if op.isEmpty() or op.peek() == x:
            op.push(x)
        elif op.peek() == '+' and x =='*':
            op.push()
        else:
            t = op.pop()
            while t != x:
                n1 = num.pop()
                n2 = num.pop()
                num.push("str(n2,n1,t")
                t = op.pop()

            op.push(x)
    else:
        num.push(x)
        
while not num.isEmpty():
    print(num.pop())
# 
while not op.isEmpty():
    print(op.pop())
print('*'>'+')
