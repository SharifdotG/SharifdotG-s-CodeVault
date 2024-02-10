students = int(input())

student = []
grade = []

for i in range(students):
    s, g = map(float, input().split())
    student.append(int(s))
    grade.append(g)

highest_grade = grade[0]
highest_grade_student = student[0]

for i in range(1, students):
    if grade[i] > highest_grade:
        highest_grade = grade[i]
        highest_grade_student = student[i]

if highest_grade >= 8:
    print(highest_grade_student)
else:
    print("Minimum note not reached")
