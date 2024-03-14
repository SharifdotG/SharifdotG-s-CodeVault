pointX, pointY = map(float, input().split())

if pointX == 0 and pointY == 0:
    print("Origem")
elif pointX == 0:
    print("Eixo Y")
elif pointY == 0:
    print("Eixo X")
elif pointX > 0 and pointY > 0:
    print("Q1")
elif pointX < 0 and pointY > 0:
    print("Q2")
elif pointX < 0 and pointY < 0:
    print("Q3")
else:
    print("Q4")
