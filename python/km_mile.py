# Function to convert kilometers to miles
def km_to_miles(km):
    return km * 0.621371

# Input: Enter distance in kilometers
km = float(input("Enter distance in kilometers: "))

# Convert to miles
miles = km_to_miles(km)

# Output: Print the distance in miles
print(f"{km} kilometers is equal to {miles:.2f} miles")
