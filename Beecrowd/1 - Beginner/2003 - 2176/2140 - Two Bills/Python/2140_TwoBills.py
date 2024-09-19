while True:
    buy_price, sell_price = map(int, input().split())

    if buy_price == 0 and sell_price == 0:
        break

    change = sell_price - buy_price

    if change in [7, 12, 22, 52, 102, 15, 25, 55, 105, 30, 60, 110, 70, 120, 150]:
        print("possible")
    else:
        print("impossible")
