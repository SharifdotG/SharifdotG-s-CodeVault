while True:
    try:
        hour, minute = map(int, input().split(":"))
        delay = 0

        if hour >= 7:
            delay = (hour - 7) * 60 + minute

        print(f"Atraso maximo: {delay}")

    except EOFError:
        break
