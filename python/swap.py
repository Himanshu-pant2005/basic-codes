# Function to swap two numbers
def swap(a, b):
    return b, a

# Input: Enter two numbers
a = float(input("Enter the first number: "))
b = float(input("Enter the second number: "))

# Swap the numbers
a, b = swap(a, b)

# Output: Print the swapped numbers
print(f"After swapping: first number = {a}, second number = {b}")
