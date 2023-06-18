substring = input()
string = input()
print(sum(string[i:].startswith(substring) for i in range(len(string))))