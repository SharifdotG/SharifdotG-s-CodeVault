credit1, credit2, credit3 = map(int, input().split())

if (credit1 == credit2 or credit1 == credit3 or
    credit2 == credit3 or credit1 + credit2 == credit3 or
    credit1 + credit3 == credit2 or credit2 + credit3 == credit1):
    print("S")
else:
    print("N")
