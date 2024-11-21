#Write a Python function to calculate the factorial of a number (a  nonnegative integer) 

def factorial(n):
    result = 1
    for i in range(2, n + 1):  # Start from 2, since multiplying by 1 has no effect
        result *= i
    return result

# Example usage
num = 5
print(f"Factorial of {num} is {factorial(num)}")
