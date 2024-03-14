import sys
import math

for line in sys.stdin:
    values = list(map(int, line.split()))
    fiddlesticksX, fiddlesticksY, invaderX, invaderY, invaderSpeed, castingRadius, crowRadius = values

    distance = math.sqrt((invaderX - fiddlesticksX) ** 2 + (invaderY - fiddlesticksY) ** 2) + invaderSpeed * 1.5
    range = castingRadius + crowRadius

    if distance <= range:
        print("Y")
    else:
        print("N")
