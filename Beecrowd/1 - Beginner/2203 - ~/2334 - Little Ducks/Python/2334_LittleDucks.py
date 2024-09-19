while True:
    try:
        ducks = int(input())
        if ducks == -1:
            break

        if ducks == 0:
            print(0)
        else:
            print(ducks - 1)
    except EOFError:
        break
