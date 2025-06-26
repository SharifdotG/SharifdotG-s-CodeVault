while True:
    try:
        password = int(input())
        print(password - 1)
    except EOFError:
        break
