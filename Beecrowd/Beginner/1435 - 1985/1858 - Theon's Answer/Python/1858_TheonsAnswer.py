numberOfPeople = int(input())
theonAnswer = input().split()

theonAnswerPosition = 0

for i in range(numberOfPeople):
    if int(theonAnswer[i]) < int(theonAnswer[theonAnswerPosition]):
        theonAnswerPosition = i

print(theonAnswerPosition + 1)
