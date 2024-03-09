while True:
    value1, value2 = map(int, input().split())

    if value1 == value2:
        break

    if value1 > value2:
        print("Decrescente")
    else:
        print("Crescente")
