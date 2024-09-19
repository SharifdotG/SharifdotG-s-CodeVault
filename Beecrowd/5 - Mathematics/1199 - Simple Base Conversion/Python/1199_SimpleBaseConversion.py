import sys

for line in sys.stdin:
    n = line.strip()
    if n[0] == "-":
        break

    if n[1] == "x":
        x = int(n, 16)
        print(x)
    else:
        num = int(n)
        print(f"0x{num:X}")
