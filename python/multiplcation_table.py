def print_table(number, range_end):
    for i in range(1, range_end + 1):
        print(f"{number} * {i} = {number * i}")

# Input: Enter the number for which you want the multiplication table
number = int(input("Enter the number to print its multiplication table: "))

# Input: Enter the range of the multiplication table
range_end = int(input("Enter the range for the multiplication table: "))

# Call the function to print the table
print_table(number, range_end)
