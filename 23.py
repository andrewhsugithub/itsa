money, apples, oranges, peaches = map(int,input().split(','))
cost = apples*15+oranges*20+peaches*30
if money<cost:
    print("0")
else:
    track = []
    change = money-cost
    track.append(change//50)
    change%=50  
    track.append(change//5)
    change%=5 
    track.append(change)
    track.reverse()
    print(','.join([str(x) for x in track]))