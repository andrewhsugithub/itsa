string = input().lower().split()
visited = set({})
for i,x in enumerate(string):
    if x in visited:
        continue
    visited.add(x)
    if i==0:
        print(x,end="")
    else:
        print(f" {x}",end="")
print()
        