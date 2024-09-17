import cmath

# Function to solve a quadratic equation
def solve_quadratic(a, b, c):
    # Calculate the discriminant
    discriminant = cmath.sqrt(b**2 - 4*a*c)
    
    # Calculate two solutions
    x1 = (-b + discriminant) / (2 * a)
    x2 = (-b - discriminant) / (2 * a)
    
    return x1, x2

# Input: Enter coefficients a, b, and c
a = float(input("Enter coefficient a: "))
b = float(input("Enter coefficient b: "))
c = float(input("Enter coefficient c: "))

# Solve the quadratic equation
x1, x2 = solve_quadratic(a, b, c)

# Output: Print the solutions
print(f"The solutions are {x1} and {x2}")
