coinCount = 0

unitAmount, money = input("동전 종류의 수와 금액을 입력하세요.").split()

print(unitAmount, money)

unitArray = [1, 5, 10, 50, 100, 500, 1000, 5000, 10000, 50000]

for unit in range(int(unitAmount)-1, -1, -1):
    coin = int(money) // unitArray[unit]
    if coin > 0:
        coinCount += int(coin)
    money = int(money) - (unitArray[unit] * coin)
print("coin 갯수 : ", coinCount)
