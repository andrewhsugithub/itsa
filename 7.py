cases = int(input())
for i in range(cases):
    line = input().split()
    operator = line[0]
    complex_1 = complex(int(line[1]),int(line[2]))
    complex_2 = complex(int(line[3]),int(line[4]))
    if operator=='+':
        print(int((complex_1+complex_2).real),end=" ")
        print(int((complex_1+complex_2).imag))
    elif operator=='-':
        print(int((complex_1-complex_2).real),end=" ")
        print(int((complex_1-complex_2).imag))
    elif operator=='*':
        print(int((complex_1*complex_2).real),end=" ")
        print(int((complex_1*complex_2).imag))
    else:
        print(int((complex_1/complex_2).real),end=" ")
        print(int((complex_1/complex_2).imag))
        