while True:
    try:
        month, day = map(int, input().split())
        
        if month == 12 and day == 25:
            print("E natal!")
        elif month == 12 and day == 24:
            print("E vespera de natal!")
        elif month == 12 and day > 25:
            print("Ja passou!")
        else:
            days = 0

            if month == 1:
                days = 360 - day
            elif month == 2:
                days = 360 - 31 - day
            elif month == 3:
                days = 360 - 31 - 29 - day
            elif month == 4:
                days = 360 - 31 - 29 - 31 - day
            elif month == 5:
                days = 360 - 31 - 29 - 31 - 30 - day
            elif month == 6:
                days = 360 - 31 - 29 - 31 - 30 - 31 - day
            elif month == 7:
                days = 360 - 31 - 29 - 31 - 30 - 31 - 30 - day
            elif month == 8:
                days = 360 - 31 - 29 - 31 - 30 - 31 - 30 - 31 - day
            elif month == 9:
                days = 360 - 31 - 29 - 31 - 30 - 31 - 30 - 31 - 31 - day
            elif month == 10:
                days = 360 - 31 - 29 - 31 - 30 - 31 - 30 - 31 - 31 - 30 - day
            elif month == 11:
                days = 360 - 31 - 29 - 31 - 30 - 31 - 30 - 31 - 31 - 30 - 31 - day
            elif month == 12:
                days = 360 - 31 - 29 - 31 - 30 - 31 - 30 - 31 - 31 - 30 - 31 - 30 - day

            print(f"Faltam {days} dias para o natal!")
    except EOFError:
        break
