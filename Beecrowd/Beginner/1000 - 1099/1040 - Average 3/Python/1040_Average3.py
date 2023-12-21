grade1, grade2, grade3, grade4 = map(float, input().split())

average = (grade1 * 2 + grade2 * 3 + grade3 * 4 + grade4) / 10

print(f"Media: {average:.1f}")

if average >= 7.0:
    print("Aluno aprovado.")
elif average < 5.0:
    print("Aluno reprovado.")
else:
    print("Aluno em exame.")
    
    exam = float(input())
    
    print(f"Nota do exame: {exam:.1f}")

    average = (average + exam) / 2

    if average >= 5.0:
        print("Aluno aprovado.")
    else:
        print("Aluno reprovado.")
    
    print(f"Media final: {average:.1f}")
