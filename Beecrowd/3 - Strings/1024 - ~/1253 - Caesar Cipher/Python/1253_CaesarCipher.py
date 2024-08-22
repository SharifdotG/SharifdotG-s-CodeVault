n = int(input())

for _ in range(n):
    s = input().strip()
    k = int(input().strip())

    result = []
    for char in s:
        new_char = chr(ord(char) - k)
        if ord(new_char) < ord("A"):
            new_char = chr(ord(new_char) + 26)
        result.append(new_char)

    print("".join(result))
