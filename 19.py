n = int(input())
task_time = [int(x) for x in input().split()]
times = [0]*25
cars = 0
for i in range(0,len(task_time),2):
    start,end = task_time[i],task_time[i+1]
    for j in range(start,end):
        times[j]+=1
        cars = max(cars,times[j])
print(cars)