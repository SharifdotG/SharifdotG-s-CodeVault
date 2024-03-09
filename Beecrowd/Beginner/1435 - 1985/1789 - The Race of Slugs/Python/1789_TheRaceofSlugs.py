while True:
    try:
        slugs = int(input())
        speed = input().split()
        max_speed = 0

        for i in range(slugs):
            if max_speed < int(speed[i]):
                max_speed = int(speed[i])

        if max_speed < 10:
            print(1)
        elif 10 <= max_speed < 20:
            print(2)
        else:
            print(3)

    except EOFError:
        break
