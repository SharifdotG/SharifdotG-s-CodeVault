number = int(input())

numbers = input().split()

lowest_number = int(numbers[0])
lowest_number_position = 1

for i in range(1, number):
    if int(numbers[i]) < lowest_number:
        lowest_number = int(numbers[i])
        lowest_number_position = i + 1

print(f"Menor valor: {lowest_number}")
print(f"Posicao: {lowest_number_position - 1}")
