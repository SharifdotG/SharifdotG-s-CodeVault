firstNumber = int(input("Enter first number: "))
secondNumber = int(input("Enter second number: "))

print("Before swapping:")
print("First number:", firstNumber)
print("Second number:", secondNumber)

temp = firstNumber
firstNumber = secondNumber
secondNumber = temp

print("After swapping:")
print("First number:", firstNumber)
print("Second number:", secondNumber)
