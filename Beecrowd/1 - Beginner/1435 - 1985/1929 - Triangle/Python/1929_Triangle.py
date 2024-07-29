a, b, c, d = map(int, input().split())

if a < b + c and b < a + c and c < a + b:
    print("S")
elif a < b + d and b < a + d and d < a + b:
    print("S")
elif a < c + d and c < a + d and d < a + c:
    print("S")
elif b < c + d and c < b + d and d < b + c:
    print("S")
else:
    print("N")
