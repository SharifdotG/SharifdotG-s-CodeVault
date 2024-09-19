import math

while True:
    ev1, ev2, at, d = map(float, input().split())
    if ev1 == 0:
        break

    n1 = math.ceil(ev1 / d)
    n2 = math.ceil(ev2 / d)

    if at == 3:
        answer = n1 / (n1 + n2)
    else:
        p = at / 6.0
        answer = (1 - pow((1 - p) / p, n1)) / (1 - pow((1 - p) / p, n1 + n2))

    print(f"{answer * 100:.1f}")
