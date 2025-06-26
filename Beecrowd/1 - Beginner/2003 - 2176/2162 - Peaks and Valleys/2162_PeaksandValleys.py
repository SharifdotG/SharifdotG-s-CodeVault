landscapeMeasures = int(input())
height = list(map(int, input().split()))

count1 = count2 = 0

if height[0] < height[1]:
    for i in range(landscapeMeasures - 1):
        if i % 2 == 0:
            if height[i] < height[i + 1]:
                count1 += 1
        else:
            if height[i] > height[i + 1]:
                count2 += 1
elif height[0] > height[1]:
    for i in range(landscapeMeasures - 1):
        if i % 2 == 0:
            if height[i] > height[i + 1]:
                count1 += 1
        else:
            if height[i] < height[i + 1]:
                count2 += 1

if count1 + count2 + 1 == landscapeMeasures:
    print("1")
else:
    print("0")
