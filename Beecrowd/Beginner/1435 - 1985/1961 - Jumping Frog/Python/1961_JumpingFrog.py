height, pipes = map(int, input().split())

pipes_height = list(map(int, input().split()))

is_possible = True

for i in range(pipes - 1):
    if abs(pipes_height[i] - pipes_height[i + 1]) > height:
        is_possible = False
        break
    
if is_possible:
    print("YOU WIN")
else:
    print("GAME OVER")
