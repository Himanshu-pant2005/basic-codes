# Input: Enter two numbers
a = float(input("Enter the first number: "))
b = float(input("Enter the second number: "))

# Swap the numbers without using a third variable
a = a + b
b = a - b
a = a - b

# Output: Print the swapped numbers
print(f"After swapping: first number = {a}, second number = {b}")
