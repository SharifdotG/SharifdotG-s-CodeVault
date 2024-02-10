weight = float(input("Enter your weight in kilogram: "))
height = float(input("Enter your height in meter: "))

bmi = weight / (height * height)

print(f'Your BMI is {bmi:.2f}')
