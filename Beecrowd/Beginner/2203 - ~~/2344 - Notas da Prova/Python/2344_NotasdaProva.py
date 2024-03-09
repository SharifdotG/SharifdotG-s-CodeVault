grade = int(input())

if grade == 0:
    print("E")
elif 1 <= grade <= 35:
    print("D")
elif 36 <= grade <= 60:
    print("C")
elif 61 <= grade <= 85:
    print("B")
elif 86 <= grade <= 100:
    print("A")
