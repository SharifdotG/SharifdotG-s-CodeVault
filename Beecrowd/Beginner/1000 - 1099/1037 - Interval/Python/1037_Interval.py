number = float(input())

if 0 <= number <= 25:
    print("Intervalo [0,25]")
elif 25 < number <= 50:
    print("Intervalo (25,50]")
elif 50 < number <= 75:
    print("Intervalo (50,75]")
elif 75 < number <= 100:
    print("Intervalo (75,100]")
else:
    print("Fora de intervalo")