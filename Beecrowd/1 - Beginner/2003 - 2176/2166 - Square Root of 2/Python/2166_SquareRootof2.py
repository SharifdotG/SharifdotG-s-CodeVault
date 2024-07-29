denominator_repititions = int(input())

result = 0

for i in range(denominator_repititions):
    result += 2
    result = 1 / result

result += 1

print("{:.10f}".format(result))
