# How Many Basic Types Of Functions Are Available In Python?
#Built-in functions
#User-defined functions

def factorial(n):
    if n == 0 or n == 1:
        return 1
    else:
        return n * factorial(n - 1)

print(factorial(5))  # Output: 120
