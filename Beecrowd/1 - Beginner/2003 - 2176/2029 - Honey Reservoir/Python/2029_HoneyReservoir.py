import sys

for line in sys.stdin:
    volume = float(line)
    diameter = float(input())
    
    radius = diameter / 2
    area = 3.14 * radius * radius
    height = volume / area

    print(f"ALTURA = {height:.2f}")
    print(f"AREA = {area:.2f}")
