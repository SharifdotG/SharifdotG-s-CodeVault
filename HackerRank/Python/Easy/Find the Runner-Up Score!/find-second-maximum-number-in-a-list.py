n = int(input())
arr = list(map(int, input().split()))

arr.sort()
max_score = arr[-1]
runner_up_score = max_score

for i in range(n - 2, -1, -1):
    if arr[i] < max_score:
        runner_up_score = arr[i]
        break

print(runner_up_score)
