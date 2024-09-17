def is_armstrong_number(num):
    """
    Check if a number is an Armstrong number.
    """
    num_str = str(num)  
    num_digits = len(num_str)  
    sum_of_powers = sum(int(digit) ** num_digits for digit in num_str)  
    return sum_of_powers == num  

def find_armstrong_numbers(start, end):
    """
    Find all Armstrong numbers in a given interval [start, end].
    """
    armstrong_numbers = []
    for num in range(start, end + 1):
        if is_armstrong_number(num):    
            armstrong_numbers.append(num)
    return armstrong_numbers

if __name__ == "__main__":
    start_interval = int(input("Enter the start of the interval: "))
    end_interval = int(input("Enter the end of the interval: "))

    armstrong_numbers = find_armstrong_numbers(start_interval, end_interval)

    print(f"Armstrong numbers in the interval [{start_interval}, {end_interval}] are: {armstrong_numbers}")
