inter = 0
gremio = 0
draw = 0
grenais = 0

while True:
    i, g = map(int, input().split())

    if i > g:
        inter += 1
    elif i < g:
        gremio += 1
    else:
        draw += 1

    grenais += 1

    print("Novo grenal (1-sim 2-nao)")

    option = int(input())

    if option == 2:
        break

print(f"{grenais} grenais")
print(f"Inter:{inter}")
print(f"Gremio:{gremio}")
print(f"Empates:{draw}")

if inter > gremio:
    print("Inter venceu mais")
elif inter < gremio:
    print("Gremio venceu mais")
else:
    print("Nao houve vencedor")
