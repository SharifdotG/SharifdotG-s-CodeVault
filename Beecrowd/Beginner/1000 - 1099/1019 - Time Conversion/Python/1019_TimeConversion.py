totalTime = int(input())
hours = totalTime // 3600
minutes = (totalTime % 3600) // 60
seconds = (totalTime % 3600) % 60

print(f"{hours}:{minutes}:{seconds}")