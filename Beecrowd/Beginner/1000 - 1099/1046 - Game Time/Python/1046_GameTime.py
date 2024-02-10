start, end = map(int, input().split())

if start >= end:
    print(f"O JOGO DUROU {24 - start + end} HORA(S)")
else:
    print(f"O JOGO DUROU {end - start} HORA(S)")
