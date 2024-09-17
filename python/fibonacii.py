def fibonacci_iterative(n):
    fib_series = []
    a, b = 0, 1            #assigning 2 initial values
    while len(fib_series) < n:
        fib_series.append(a)
        a, b = b, a + b           #increasing value of "a" each time all the value is assigned to a,b,a+b.  
    return fib_series

n = int(input("Enter the number of terms: "))
print("Fibonacci series (iterative):", fibonacci_iterative(n))
