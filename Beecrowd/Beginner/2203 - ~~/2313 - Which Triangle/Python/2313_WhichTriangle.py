a, b, c = map(int, input().split())

if a < b + c and b < a + c and c < a + b:
    print("Valido-", end="")

    if a == b == c:
        print("Equilatero")
    elif a == b or b == c or a == c:
        print("Isoceles")
    else:
        print("Escaleno")

    print("Retangulo: ", end="")

    if a * a == b * b + c * c or b * b == a * a + c * c or c * c == a * a + b * b:
        print("S")
    else:
        print("N")
else:
    print("Invalido")
