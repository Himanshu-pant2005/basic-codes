import calendar

# Input: Enter year and month
year = int(input("Enter year (e.g., 2024): "))
month = int(input("Enter month (1-12): "))

# Display the calendar for the given month and year
print(calendar.month(year, month))
