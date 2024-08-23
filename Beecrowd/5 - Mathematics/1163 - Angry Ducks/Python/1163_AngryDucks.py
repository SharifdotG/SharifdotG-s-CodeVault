import math
import sys

PI = 3.14159
GRAVITY = 9.80665

input = sys.stdin.read
data = input().split()

index = 0

while index < len(data):
    initialHeight = float(data[index])
    index += 1
    minDistance = float(data[index])
    maxDistance = float(data[index + 1])
    numShots = int(data[index + 2])
    index += 3

    for _ in range(numShots):
        angleDegrees = float(data[index])
        initialSpeed = float(data[index + 1])
        index += 2

        angleRadians = angleDegrees * PI / 180

        horizontalSpeed = initialSpeed * math.cos(angleRadians)
        verticalSpeed = initialSpeed * math.sin(angleRadians)

        timeToRise = verticalSpeed / GRAVITY

        maxHeight = (verticalSpeed * verticalSpeed) / (2 * GRAVITY) + initialHeight

        finalVerticalSpeed = math.sqrt(2 * GRAVITY * maxHeight)

        timeToFall = finalVerticalSpeed / GRAVITY

        totalTime = timeToRise + timeToFall

        horizontalDistance = horizontalSpeed * totalTime

        if minDistance < horizontalDistance < maxDistance:
            print(f"{horizontalDistance:.5f} -> DUCK")
        else:
            print(f"{horizontalDistance:.5f} -> NUCK")
