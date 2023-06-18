import sys

stack = [int(x) for x in input()]
i = 0
for i in range(len(stack)//2):
    if stack[i] == stack.pop():
        continue
    else:
        print("NO")
        sys.exit()
print("YES")