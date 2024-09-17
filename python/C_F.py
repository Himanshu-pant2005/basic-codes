# Function to convert Celsius to Fahrenheit
def celsius_to_fahrenheit(celsius):
    return (celsius * 9/5) + 32

# Input: Enter temperature in Celsius
celsius = float(input("Enter temperature in Celsius: "))

# Convert to Fahrenheit
fahrenheit = celsius_to_fahrenheit(celsius)

# Output: Print the temperature in Fahrenheit
print(f"{celsius} Celsius is equal to {fahrenheit:.2f} Fahrenheit")
