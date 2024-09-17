def is_prime(number):
    if number <= 1:
        return False
    if number == 2:
        return True  # 2 is the only even prime number
    if number % 2 == 0:
        return False
    for i in range(3, int(number**0.5) + 1, 2):
        if number % i == 0:
            return False
    return True

# Input: Enter a number
num = int(input("Enter a number: "))

# Check if the number is prime
if is_prime(num):
    print(f"{num} is a prime number.")
else:
    print(f"{num} is not a prime number.")
