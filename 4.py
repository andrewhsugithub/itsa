import math

start_time = [int(x) for x in input().split()]
end_time = [int(x) for x in input().split()]

parking_time = (end_time[0]-start_time[0])*60 + end_time[1]-start_time[1]

cost = 0
if parking_time>4*60:
    cost+=math.floor((parking_time-4*60)/30)*60
    parking_time = 4*60
if parking_time>2*60:
    cost+=math.floor((parking_time-2*60)/30)*40
    parking_time = 2*60
if parking_time<=2*60:
    cost+=math.floor(parking_time/30)*30

print(cost)