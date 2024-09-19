n = int(input())

students = []
for _ in range(n):
    name = input()
    score = float(input())
    students.append([name, score])

students.sort(key=lambda x: x[1])
second_lowest = sorted(set([x[1] for x in students]))[1]
second_lowest_students = [x[0] for x in students if x[1] == second_lowest]

for student in sorted(second_lowest_students):
    print(student)
