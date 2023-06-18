ans = [int(x) for x in input()]
while True:
    string = input()
    if string=="0000":
        break
    guess = [int(x) for x in string]
    list = ['0','A','0','B']
    for i,x in enumerate(guess):
        if ans[i]==int(guess[i]):
            list[0] = str(int(list[0])+1)
        elif x in ans:
            list[2] = str(int(list[2])+1)
    print(''.join(list))