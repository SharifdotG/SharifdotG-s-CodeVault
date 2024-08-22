n = int(input())

for _ in range(n):
    s = input()
    mid = len(s) // 2
    
    first_half = s[:mid][::-1]
    second_half = s[mid:][::-1]

    print(first_half + second_half)
