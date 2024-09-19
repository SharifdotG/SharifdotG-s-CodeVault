import sys

for line in sys.stdin:
    s = line.rstrip("\n")
    italic = False
    bold = False

    for char in s:
        if char == "_":
            if not italic:
                print("<i>", end="")
            else:
                print("</i>", end="")

            italic = not italic
        elif char == "*":
            if not bold:
                print("<b>", end="")
            else:
                print("</b>", end="")

            bold = not bold
        else:
            print(char, end="")

    print()
