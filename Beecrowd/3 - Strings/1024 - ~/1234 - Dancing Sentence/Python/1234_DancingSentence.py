while True:
    try:
        s = input()
        result = []
        upper = True

        for ch in s:
            if ch.isalpha():
                if upper:
                    result.append(ch.upper())
                else:
                    result.append(ch.lower())
                upper = not upper
            else:
                result.append(ch)

        print("".join(result))
    except EOFError:
        break
