radius_squared = 100**2
coordinates = [int(x) for x in input().split()]
sum = 0.0
for coordinate in coordinates:
    sum+=coordinate**2
if sum>radius_squared:
    print("outside")
else:
    print("inside")