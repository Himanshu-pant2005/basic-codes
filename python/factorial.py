def factorial(n):
    result = 1
    for i in range(1, n + 1):
        result *= i
    return result

# Input: Enter a number
num = int(input("Enter a number: "))

# Compute and print the factorial
print(f"The factorial of {num} is {factorial(num)}")
