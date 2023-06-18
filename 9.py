num = int(input())

sum = 0
for i in range(num+1):
    sum += i if i%3==0 else 0
print(sum)