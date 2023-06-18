n = int(input())
for x in range(n):
    [num1, num2] = [c[::-1] for c in input().split()]
    if(len(num1)>len(num2)):
        num2+="0"*(len(num1)-len(num2))
    else:
        num1+="0"*(len(num2)-len(num1))
    sum = ""
    carry = 0
    for i in range(len(num1)):
        total = int(num1[i])+int(num2[i])+carry
        if total>=10:
            carry = total//10
            total = total%10
        else:
            carry = 0
        sum+=str(total)
    if carry:
        sum+=str(carry)
    print(sum[::-1])