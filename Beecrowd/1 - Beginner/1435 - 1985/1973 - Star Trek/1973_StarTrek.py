stars = int(input())
sheep = list(map(int, input().split()))

star = [0] * stars
star_count = 0
sheep_count = 0

i = 0

while i < stars:
    if sheep[i] % 2 == 1:
        star[i] = 1
        sheep[i] -= 1
        
        i += 1
    elif sheep[i] % 2 == 0:
        if sheep[i] > 0:
            star[i] = 1
            sheep[i] -= 1
            
        i -= 1

    if i < 0 or i >= stars:
        break

for i in range(stars):
    sheep_count += sheep[i]
    star_count += star[i]

print(star_count, sheep_count)
