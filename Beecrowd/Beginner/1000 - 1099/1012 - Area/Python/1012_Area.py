a, b, c = list(map(float, input().split()))

triangle = (a * c) / 2
circle = 3.14159 * c * c
trapezium = ((a + b) * c) / 2
square = b * b
rectangle = a * b

print(f"TRIANGULO: {triangle:.3f}")
print(f"CIRCULO: {circle:.3f}")
print(f"TRAPEZIO: {trapezium:.3f}")
print(f"QUADRADO: {square:.3f}")
print(f"RETANGULO: {rectangle:.3f}")
