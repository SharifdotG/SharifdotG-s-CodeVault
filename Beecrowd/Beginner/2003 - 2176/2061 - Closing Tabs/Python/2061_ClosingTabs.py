tabs, actions = map(int, input().split())

while actions > 0:
    action = input().strip()

    if action == "fechou":
        tabs += 1
    else:
        tabs -= 1

    actions -= 1

print(tabs)
