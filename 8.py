import math

def is_prime(n):
    if n < 2:
        return False
    for div in range(2, math.ceil(math.sqrt(n))+1):
        if n % div == 0:
            return False
    return True

num = int(input())
if is_prime(num):
    print("YES")
else:
    print("NO")