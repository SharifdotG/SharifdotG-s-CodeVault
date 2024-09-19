while True:
    regions = int(input())
    if regions == 0:
        break

    randomNumber = 1

    while True:
        v = list(range(1, regions + 1))
        
        i = 0
        while len(v) > 1:
            del v[i]
            i = (i + randomNumber - 1) % len(v)

        if v[0] == 13:
            print(randomNumber)
            break

        randomNumber += 1
