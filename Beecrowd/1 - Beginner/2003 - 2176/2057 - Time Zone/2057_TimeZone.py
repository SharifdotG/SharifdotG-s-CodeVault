timeOfDeparture, travelTime, timeZone = map(int, input().split())

result = timeOfDeparture + travelTime + timeZone

if result < 0:
    result += 24
elif result >= 24:
    result -= 24

print(result)
