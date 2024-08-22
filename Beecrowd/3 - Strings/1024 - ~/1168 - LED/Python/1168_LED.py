n = int(input())

for _ in range(n):
    s = input()

    leds = 0
    for c in s:
        if c == '1':
            leds += 2
        elif c in '235':
            leds += 5
        elif c == '4':
            leds += 4
        elif c in '690':
            leds += 6
        elif c == '7':
            leds += 3
        elif c == '8':
            leds += 7

    print(leds, "leds")