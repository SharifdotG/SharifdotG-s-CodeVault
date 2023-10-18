firstNumber = int(input("Enter first number: "))
secondNumber = int(input("Enter second number: "))

print("Before swapping:")
print("First number:", firstNumber)
print("Second number:", secondNumber)

firstNumber = firstNumber + secondNumber
secondNumber = firstNumber - secondNumber
firstNumber = firstNumber - secondNumber

print("After swapping:")
print("First number:", firstNumber)
print("Second number:", secondNumber)
