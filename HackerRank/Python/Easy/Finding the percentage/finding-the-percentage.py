n = int(input())
student_marks = {}

for _ in range(n):
    name, *line = input().split()
    scores = list(map(float, line))
    student_marks[name] = scores

query_name = input()
query_scores = student_marks[query_name]

query_average = sum(query_scores) / len(query_scores)
print("{:.2f}".format(query_average))
