name = input("Enter your name: ")
age = int(input("Enter your age: "))
height = float(input("Enter your height (in meters): "))
is_student = input("Are you a student? (yes/no): ").lower() == "yes"

print("\n--- User Information ---")
print("Name:", name)
print("Age:", age)
print("Height:", height, "m")
print("Is Student:", is_student)