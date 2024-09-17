# Function to find the sum of natural numbers in the given interval
def sum_of_natural_numbers(start, end):
    total_sum = sum(range(start, end + 1))
    return total_sum

# Input: Define the interval
start = int(input("Enter the start of the interval: "))
end = int(input("Enter the end of the interval: "))

# Compute and print the sum
print(f"The sum of natural numbers from {start} to {end} is {sum_of_natural_numbers(start, end)}")
