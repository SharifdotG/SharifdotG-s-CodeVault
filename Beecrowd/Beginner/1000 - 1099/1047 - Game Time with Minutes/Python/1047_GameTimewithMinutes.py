startHour, startMinute, endHour, endMinute = map(int, input().split())

durationMinute = endHour * 60 + endMinute - startHour * 60 - startMinute

if durationMinute <= 0:
    durationMinute += 24 * 60

durationHour = durationMinute // 60
durationMinute %= 60

print(f"O JOGO DUROU {durationHour} HORA(S) E {durationMinute} MINUTO(S)")
