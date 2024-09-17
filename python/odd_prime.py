def is_prime(number):
    if number <= 1:
        return False
    if number == 2:
        return False  # We are looking for odd primes, so exclude 2
    if number % 2 == 0:
        return False
    for i in range(3, int(number**0.5) + 1, 2):
        if number % i == 0:
            return False
    return True

def print_odd_primes(start, end):
    for num in range(start, end + 1):
        if num > 2 and is_prime(num):  # Check if it's greater than 2 and prime
            print(num)

# Input: Define the interval
start = int(input("Enter the start of the interval: "))
end = int(input("Enter the end of the interval: "))

# Print odd prime numbers in the given interval
print_odd_primes(start, end)
