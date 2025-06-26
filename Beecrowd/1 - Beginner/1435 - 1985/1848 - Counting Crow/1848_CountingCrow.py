caw_counter = 0
caw_value = 0

while caw_counter < 3:
    caw = input()

    if caw == "--*":
        caw_value += 1
    elif caw == "-*-":
        caw_value += 2
    elif caw == "-**":
        caw_value += 3
    elif caw == "*--":
        caw_value += 4
    elif caw == "*-*":
        caw_value += 5
    elif caw == "**-":
        caw_value += 6
    elif caw == "***":
        caw_value += 7
    elif caw == "caw caw":
        print(caw_value)
        
        caw_value = 0
        caw_counter += 1
