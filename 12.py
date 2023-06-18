def recursive(n):
    if n<=1:
        return n+1
    return recursive(n-1)+recursive(n//2)

print(recursive(int(input())))