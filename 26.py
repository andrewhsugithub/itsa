n = int(input())
map = {}
def assign(key):
    list = [int(x) for x in key]
    map[key] = sum(list)
for x in input().split():
    assign(x)
map = dict(sorted(map.items(),key=lambda item: (item[1],int(item[0]))))
print(' '.join(map))