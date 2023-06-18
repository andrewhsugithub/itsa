input_string = [(c if c.isalpha() else ' ') for c in input().lower()]
string = ""
for c in input_string:
    string+=c
input_string = string.split()
str_list = [x for x in ''.join(input_string)]
counter = {}
for c in str_list:
    if c in counter:
        counter[c]+=1
    else:
        counter[c] = 1
print(len(input_string))
counter = dict(sorted(counter.items()))
for key,value in counter.items():
    print(f"{key} : {value}")