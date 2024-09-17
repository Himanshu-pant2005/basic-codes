# Function to calculate the area of a triangle
def calculate_triangle_area(base, height):
    return 0.5 * base * height

# Input: Enter the base and height of the triangle
base = float(input("Enter the base of the triangle: "))
height = float(input("Enter the height of the triangle: "))

# Calculate the area
area = calculate_triangle_area(base, height)

# Output: Print the area of the triangle
print(f"The area of the triangle is: {area}")
