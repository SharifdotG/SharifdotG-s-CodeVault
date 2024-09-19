testcases = int(input())

for _ in range(testcases):
    dice1, dice2 = map(int, input().split())
    
    if dice1 + dice2 > 6:
        print("YES")
    else:
        print("NO")