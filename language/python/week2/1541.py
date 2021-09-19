print("수식을 입력하세요.")
expression = list(input())
# print(expression)
number_temp = 0
sum = 0
n = 1
for i in range(len(expression)):
    number_temp += 1
    if expression[i] >= '0' and expression[i] <= '9' and n == 1:
        if number_temp > 1:
            sum -= int(expression[i-1])
            sum = sum + ((int(expression[i-1])*10 + int(expression[i])))
        else:
            sum += int(expression[i])
    elif expression[i] >= '0' and expression[i] <= '9' and n == -1:
        if number_temp > 1:
            sum += int(expression[i-1])
            sum = sum - ((int(expression[i-1])*10 + int(expression[i])))
        else:
            sum -= int(expression[i])
    else:
        number_temp = 0
        if expression[i] == '+':
            continue
        elif expression[i] == '-':
            n = -1

print("sum : ", sum)
