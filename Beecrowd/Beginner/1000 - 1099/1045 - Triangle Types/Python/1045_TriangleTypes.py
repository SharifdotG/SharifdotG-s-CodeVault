a, b, c = map(float, input().split())

if a >= b + c or b >= a + c or c >= a + b:
    print("NAO FORMA TRIANGULO")
elif a * a == b * b + c * c or b * b == a * a + c * c or c * c == a * a + b * b:
    print("TRIANGULO RETANGULO")
elif a * a > b * b + c * c or b * b > a * a + c * c or c * c > a * a + b * b:
    print("TRIANGULO OBTUSANGULO")
elif a * a < b * b + c * c or b * b < a * a + c * c or c * c < a * a + b * b:
    print("TRIANGULO ACUTANGULO")

if a == b == c:
    print("TRIANGULO EQUILATERO")
elif a == b or b == c or a == c:
    print("TRIANGULO ISOSCELES")
